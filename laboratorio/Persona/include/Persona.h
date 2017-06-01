#ifndef PERSONA_H
#define PERSONA_H
#include "Birtday.h"
#include "Ingresos.h"
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;

class Persona
{
    protected:
        string nombre;
        string apellido;
        string sexo;
        int edad;
        Birtday cumple;
        Ingresos ingr;

    public:
        Persona(const string &mynombre, const string &myapellido , const string &mysexo, Birtday b, Ingresos i)
            : nombre(mynombre), apellido(myapellido), sexo(mysexo), cumple(b), ingr(i) {}
        virtual string getDatos() = 0;
        //virtual ~Persona();
};

#endif // PERSONA_H
