#include <iostream>
#include "Persona.h"
#include "Conserge.h"
#include "Gerente.h"
//#include "Birtday.h"
//#include "Ingresos.h"

using namespace std;

int main()
{
    Birtday b1(2000, 11, 3);
    Birtday b2(1999, 3, 3);

    Ingresos i1(2034, 1000);
    Ingresos i2(10000, 5070);

    Gerente g1("Floroponcio", "Ac", "Varon" , "6474", b1, i1);
    Conserge c1("Alonso", "Martinez", "Varon" , b2, i2);

    vector<Persona *> personas;

    personas.push_back(&g1);
    personas.push_back(&c1);

    cout<< "\n\t\t\t PERSONAS"<<endl<<endl;
    for(int i=0; i<2; i++){
        Persona *ptr_p;
        ptr_p = personas[i];
        cout<< ptr_p->getDatos() <<endl<<endl;}

//    cout<< "\n\tPERSONAS"<<endl;
//    cout<< "\nGerente"<<endl<<endl;
//    cout<< g1.getDatos()<<endl;
////    cout<< <<endl<<endl;
//    cout<< "\nConserge"<<endl<<endl;
//    cout<< c1.getDatos()<<endl;

    return 0;
}
