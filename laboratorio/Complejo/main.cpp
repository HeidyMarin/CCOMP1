#include "Complejo.h"

int main()
{
    Complejo X(0,1);
    Complejo Y(3,5);
    cout<<"\n\tCOMPLEJO"<<endl;

	cout<<"\n\tX: "<< X.getX()<<" , "<<X.getY()<<endl;
	cout<<"\tY: "<< Y.getX()<<" , "<<Y.getY()<<endl;

	cout<<"\nCUAL ES EL MAYOR?"<<endl;
    if(X<Y)
		cout<<"Y es mayor"<<endl;
	else
		cout<<"X es mayor"<<endl;


	Complejo Resultado;
	cout<<"\nSUMA DE COMPLEJOS"<<endl;
	Resultado = (X+Y);
	cout<< Resultado.getX()<<" , "<<Resultado.getY()<<endl;

    cout<<"\nRESTA DE COMPLEJOS"<<endl;
	Resultado = (X-Y);
	cout<< Resultado.getX()<<" , "<<Resultado.getY()<<endl;

    cout<<"\nMULTIPLICACION DE COMPLEJOS"<<endl;
	Resultado = (X*Y);
	cout<<Resultado.getX()<<" , "<<Resultado.getY()<<endl;

    cout<<"\nPRODUCTO ESCALAR DE COMPLEJOS"<<endl;
	int v = 2;
	Complejo productoescalar;
	productoescalar= X.productEscalar(v);
	cout<< productoescalar.getX()<<" , "<<productoescalar.getY()<<endl;

    return 0;
}
