#include "PointArray.h"

int Point::getX()const{
    return x;
}

int Point::getY()const{
    return y;
}

void Point::setX(const int x){
    this->x = x;
}
void Point::setY(const int y){
    this->y = y;
}

void Point::imprimir(){
    cout <<"("<< x <<", "<< y <<")"<<endl;
}

//------------------------------------------------

PointArray::PointArray()
{
    this->tam = 0;//accerer a su propio mienbro
    points = new Point[tam];
}

PointArray::PointArray(const Point points[], const int len)
{
    this->tam = len;
    this->points = new Point[tam];

    for(int i = 0;i < len;i++)
    {
        this->points[i] = points[i];
    }
}

PointArray::PointArray(PointArray & pts)
{
    this->tam = pts.tam;
    this->points = new Point[tam];

    for(int i = 0;i < tam;i++)
    {
        this->points[i] = pts.points[i];
    }
}

PointArray::~PointArray()
{
    delete[] points;
}

void PointArray::resize(int len)
{
    Point *pts = new Point[len];
    int menor = (len > tam)? tam:len;

    for(int i = 0;i < menor;i++)
        pts[i] = this->points[i];

    delete [] points;
    points = pts;
    tam = len;
}

void PointArray::push_back(const Point &point)
{
    resize(tam+1);
    points[tam-1] = point;
}

void PointArray::insert(const int pos, const Point &point)
{

    if(pos > tam)
        cout <<"ERROR"<<endl;
    else{
    resize(tam+1);
    for(int i = tam;i > pos;i--)
        points[tam-1] = points[tam-2];

    points[pos] = point;
    }
}

void PointArray::remove(const int pos)
{
    if(pos < 0 || pos >= tam)
        cout <<"ERROR"<<endl;
    else
    {
        for(int i = pos;(i+1)< tam;i++)
        {
            points[i] = points[i+1];
        }
        resize(tam-1);
    }
}

const int PointArray::getSize() const
{
    return tam;
}

void PointArray::clear()
{
    resize(0);
}
Point *PointArray::get(const int pos)
{
    if(pos < tam)
        return points+pos;
    return NULL;
}

const Point *PointArray::get(const int pos)const
{
    if(pos < tam)
        return points+pos;
    return NULL;
}

void PointArray::imprimir_puntos()
{
    for(int i = 0;i < tam;i++)
    {
        this->points[i].imprimir();
    }
}
