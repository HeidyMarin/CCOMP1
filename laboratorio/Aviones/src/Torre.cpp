#include "Torre.h"

void Torre::agregar(Avion *avion) {aviones.push_back(avion);}

void Torre::enviarMsj()
{
	for(int i=0; i<aviones.size(); i++)
	{
		if(aviones[i]->getID() == 1)
            aviones[i]->setMensaje(" Aterrizar pista 1");
//            cout << " Aterrizar pista 1" << endl;
        else if(aviones[i]->getID() == 2)
            aviones[i]->setMensaje(" Aterrizar pista 2");
//            cout << " Aterrizar pista 2" << endl;
	}
}
