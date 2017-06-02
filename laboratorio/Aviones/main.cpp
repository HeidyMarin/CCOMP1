#include "Avion.h"
#include "Torre.h"
#include "Avion_1.h"
#include "Avion_2.h"

int main()
{
	Torre torre;

	Avion_1 *ptr_avion1;
	Avion_1 A1;
	ptr_avion1=&A1;

	Avion_2 *ptr_avion2= new Avion_2;

	torre.agregar(ptr_avion1);
	torre.agregar(ptr_avion2);

	cout<< "Aviones comunicandose con torre" <<endl;
	cout<<"\t"<< ptr_avion1->getMensaje()<< endl;
	cout<<"\t"<< ptr_avion2->getMensaje()<< endl;

	torre.enviarMsj();
	cout<< "\nEnviando mensaje"<<endl;

	cout<< ptr_avion1->getMensaje()<< endl;
	cout<< ptr_avion2->getMensaje()<< endl;
}
