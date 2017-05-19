#include "Carro.h"
#include "Avion.h"
#include "Vehiculo.h"

int main()
{
    Car c1("a123", 2012, "cool");
    Avion a1("ac234v", 1995, "wefwv","100");

    Vehiculo v[] ={ c1, a1};

    cout<< "\n\tVEHICULOS"<<endl;
    for(int i=0; i<2; i++){
        cout<<v[i].getDescripcion()<<endl;

    }

//    cout<< "\n\tVEHICULOS"<<endl;
//    cout<< "\nCarro"<<endl;
//    cout<< c1.getDescripcion()<<endl;
//    cout<< "\nAvion"<<endl;
//    cout<< a1.getDescripcion()<<endl;

    return 0;
}
