#ifndef CARRO_H
#define CARRO_H
#include "Vehiculo.h"

class Car : public Vehiculo { // Makes Car inherit from Vehicle

    string style ;

    public :
        Car( const string & myLicense , const int myYear , const string& myStyle )
        : Vehiculo ( myLicense , myYear ), style ( myStyle ) {}
        const string getDescripcion() // Overriding this member function
        {   stringstream ss;
                ss<<year;
            return ss.str() + " " + style + ": " + licencia;}
        const string & getStyle () { return style ;}
};

#endif // CARRO_H
