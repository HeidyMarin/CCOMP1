#include <iostream>

using namespace std;

int main()
{
	float lado;
	float radio;
	float altura;
	float base;
	float pi= 3.14;
	cout<< "CUADRADO"<<endl;
	cout<< "ingrese el lado de un cuadrado : "<<endl;
	cin>>lado;
	cout<< "el area del cuadrado es: "<< lado*lado<<endl;
	cout<<endl;
	
	cout<< "-------------------------------------"<<endl;
	cout<< "CIRCULO"<<endl;
	cout<< "ingrese el radio del circulo: "<<endl;
	cin>>radio;
	cout<< "el area del circulo es : " << pi * (radio*radio)<<endl;
	cout<<endl;
	
	cout<< "-------------------------------------"<<endl;
	cout<< "RECTANGULO"<<endl;
	cout<< "ingrese la altura del rectangulo: "<<endl;
	cin>>altura;
	cout<< "ingrese la base del rectangulo: "<<endl;
	cin>>base;
	cout<< "el area del rectangulo es : "<< base*altura<<endl;
	
	return 0;
}

