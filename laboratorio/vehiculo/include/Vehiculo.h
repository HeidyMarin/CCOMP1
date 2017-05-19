#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

class Vehiculo
{
    protected:
        string licencia;
        int year;

    public:
        Vehiculo(const string &mylicencia, const int myyear)
            : licencia(mylicencia), year(myyear) {}
        virtual const string getDescripcion() const
            {
                stringstream ss;
                ss<<year;
                return licencia + " from " + ss.str();}
        const string &getlicencia() const {return licencia;}
        const int getyear() const {return year;}
};

#endif // VEHICULO_H
