#include <iostream>
#include "Geometry.h"

using namespace std;



void printAttributes(Polygon *poligono)
{
    if(poligono->getNumSides() == 3)
        cout << "TRIANGULO"<<endl;
    else
        cout << "RECTANGULO" << endl;

    cout << poligono->area()<<endl;
    poligono->getPoints().imprimir_puntos();
}

int main()
{
    Point punto, punto2(8,7);
    Point punto3;
    Point p(2,1);

    punto.setX(5);
    punto.setY(6);
//    punto.imprimir();


    PointArray points;
    points.push_back(punto);
    points.push_back(punto2);
//
//    PointArray points_1(points);
//
//    Point puntos[] ={punto, punto2};
//    PointArray points_2(puntos, 2);

//    points.resize(0);
//    cout <<points.getSize();
    points.insert(0, punto3);

//    points.imprimir_puntos();

//---------------------------------------------------
    Rectangle poligono(punto, punto3);
    Triangle poligono1(punto, punto2, punto3);
    printAttributes(&poligono);
    printAttributes(&poligono1);
    return 0;
}

