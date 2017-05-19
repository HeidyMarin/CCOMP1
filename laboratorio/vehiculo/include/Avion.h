#ifndef AVION_H
#define AVION_H
#include "Vehiculo.h"

class Avion : public Vehiculo { // Makes Car inherit from Vehicle

    string style ;
    string precio;

    public :
        Avion( const string & myLicense , const int myYear , const string& myStyle, const string& myPrecio )
        : Vehiculo ( myLicense , myYear ), style ( myStyle ), precio( myPrecio ) {}
        const string getDescripcion() // Overriding this member function
        {   stringstream ss;
                ss<<year;
            return ss.str() + " " + style + ": " + licencia + " " + precio;}
        const string & getStyle () { return style ;}
        const string & getPrecio () { return precio ;}
};
#endif // AVION_H
