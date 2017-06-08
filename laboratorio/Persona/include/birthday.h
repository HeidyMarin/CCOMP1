#ifndef BIRTDAY_H
#define BIRTDAY_H
#include <iostream>
//#include <string.h>
#include <sstream>
using namespace std;

class Birtday
{
    protected:
        int anio, mes, dia;

    public:
        Birtday(const int &myanio, const int &mymes, const int &mydia)
            : anio(myanio), mes(mymes), dia(mydia) {}
        Birtday(Birtday &b){anio = b.anio; mes= b.mes; dia = b.dia;}
        string edad(){
            int edad_act = 2017 - anio - 1;
            if ( mes < 6)
                edad_act = edad_act + 1;
            stringstream ss;
                ss<<edad_act;
            return ss.str();
        }
};

#endif // BIRTDAY_H

