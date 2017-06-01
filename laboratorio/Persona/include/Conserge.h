#include "Persona.h"
#ifndef CONSERGE_H
#define CONSERGE_H


class Conserge : public Persona
{
    public:
        Conserge(const string &mynombre, const string &myapellido , const string &mysexo, Birtday b, Ingresos i)
            : Persona (mynombre, myapellido, mysexo, b, i) {}
        string getDatos(){
            return "Nombre: " + nombre + "  Apellido: " + apellido + "  Sexo: " + sexo + "  Edad: " + cumple.edad()+ "  Ingreso total: "+ ingr.ingr_total();}
};

#endif // CONSERGE_H
