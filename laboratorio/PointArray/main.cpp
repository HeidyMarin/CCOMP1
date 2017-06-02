#include <iostream>
#include "PointArray.h"

using namespace std;

int main()
{
    Point punto, punto1(8,7);
    Point punto2;
    Point p(2,1);

    punto.setX(5);
    punto.setY(6);
    punto.imprimir();


    PointArray points;
    points.push_back(punto);
    points.push_back(punto1);

    PointArray points1(points);
//    Point puntos[] ={punto, punto2};
//    PointArray points2(puntos, 2);
    points.resize(1);
    cout <<points.getSize();
    points.insert(0, punto2);
    points.insert(0, punto1);

    points.imprimir_puntos();
    cout<<endl;
    points1.imprimir_puntos();
//    points2.imprimir_puntos();
}
