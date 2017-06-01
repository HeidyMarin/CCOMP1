#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"


class Gerente : public Persona
{
    protected:
        string codigo;

    public:
        Gerente(const string &mynombre, const string &myapellido , const string &mysexo, const string &mycodigo, Birtday b, Ingresos i)
            : Persona (mynombre, myapellido, mysexo, b, i), codigo(mycodigo) {}
        string getDatos() // Overriding this member function
        { return "Nombre: " + nombre + "  Apellido: " + apellido + "  Sexo: " + sexo + "  Edad: " + cumple.edad() + "  Codigo: " + codigo+ "  Ingreso total: "+ ingr.ingr_total();}

};

#endif // GERENTE_H
