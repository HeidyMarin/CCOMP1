#include "Geometry.h"

int Point::getX()const
{
    return x;
}

int Point::getY()const
{
    return y;
}

void Point::setX(const int x)
{
    this->x = x;
}
void Point::setY(const int y)
{
    this->y = y;
}

void Point::imprimir()
{
    cout <<"("<< x <<", "<< y <<")"<<endl;
}

//------------------------------------------------

PointArray::PointArray()
{
    this->tam = 0;
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

//Poligono--------------

int Polygon::size = 0;

Polygon::Polygon(){}

Polygon::Polygon(const Point puntos[], const int tam): poligonos(puntos, tam)
{
    size++;
}
Polygon::Polygon(PointArray &puntos): poligonos(puntos)
{
    size++;
}

Polygon::~Polygon()
{
    size--;
}

int Polygon::getNumSides()
{
    return poligonos.getSize();
}

PointArray Polygon::getPoints()
{
    return poligonos;
}

//rectangulo--------

Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0))
{
    //MATRIS GLOBAL
    constructorPoints[0] = p1;
    constructorPoints[1] = p2;
    constructorPoints[2] = p3;
    constructorPoints[3] = p4;

    return constructorPoints;
}
//la coordenada inferior izquierda y la coordenada superior derecha
Rectangle::Rectangle(Point &p1, Point &p2): Polygon(updateConstructorPoints(p1, Point(p1.getX(), p2.getY()),
                                            p2, Point(p2.getX(), p1.getY())), 4){}


Rectangle::Rectangle(int x1,int y1,int x2,int y2): Polygon(updateConstructorPoints(Point(x1,y1),Point(x1,y2),
                                                                        Point(x2,y2), Point(x2, y1)) ,4){}

double Rectangle::area()
{
    double base = constructorPoints[3].getX() - constructorPoints[0].getX();
    double altura = constructorPoints[1].getY() - constructorPoints[0].getY();

    cout << "Area del rectangulo = ";
    return base * altura;
}

//triangulo------------------


Point constructor[3];

Point * updateConstructor(const Point &p1, const Point &p2, const Point &p3)
{
    constructor[0] = p1;
    constructor[1] = p2;
    constructor[2] = p3;

    return constructor;
}

Triangle::Triangle(Point p1, Point p2, Point p3) : Polygon(updateConstructor(p1,p2,p3) ,3){}

double Triangle::area()
{
    double d1, d2, d3, s, area;

    d1 = sqrt(pow(constructor[1].getY() - constructor[0].getY(), 2) +
                pow(constructor[1].getX() - constructor[0].getX(), 2));

    d2 = sqrt(pow(constructor[2].getY() - constructor[1].getY() , 2) +
                pow(constructor[2].getX() - constructor[1].getX(), 2));

    d3 = sqrt(pow(constructor[0].getY() - constructor[2].getY() , 2) +
                pow(constructor[0].getX() - constructor[2].getX(), 2));

    s = (d1 + d2 + d3)/2;
    area = sqrt(s*(s - d1)*(s - d2)*(s - d3));

    cout << "Area del triangulo = ";
    return area;
}
