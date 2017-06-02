#ifndef POINTARRAY_H
#define POINTARRAY_H
#include<iostream>

using namespace std;

class Point
{
    private :
        int x, y;
    public :
        Point(int x_ = 0, int y_ = 0): x(x_), y(y_){}
        int getX()const;
        int getY()const;
        void setX(const int);
        void setY(const int);
        void imprimir();
};

class PointArray
{
    private :
        Point *points;
        int tam;

    public :
        PointArray();
        PointArray(const Point points[],const int sizee);
        PointArray(PointArray &q);
        ~PointArray();
        void resize(int tam);
        void push_back (const Point &);//error
        void insert(const int position, const Point &p);
        void remove(const int pos);
        const int getSize() const;
        void clear();
        Point *get(const int pos);
        const Point *get(const int pos)const;
        void imprimir_puntos();
};

#endif // POINTARRAY_H
