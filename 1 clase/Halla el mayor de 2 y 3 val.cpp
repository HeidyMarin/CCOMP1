#include <iostream>

using namespace std;

//MAYOR DE 2 VALORES

int main()
{
	int x;
	int y;
	
	cout<< "ingrese el valor de x : "<<endl;
	cin>>x;
	cout<< "ingrese el valor de y : "<<endl;
	cin>>y;
	
	if (x < y)
		cout<< "y es mayor que x "<<endl;
	
	else
		cout<< "x es mayor que y"<<endl;
	
	return 0;
}

// MAYOR DE 3 VALORES

int main()
{
	int x;
	int y;
	int z;
	int mayor;
	
	cout<< "ingrese el valor de x : "<<endl;
	cin>>x;
	cout<< "ingrese el valor de y : "<<endl;
	cin>>y;
	cout<< "ingrese el valor de z : "<<endl;
	cin>>z;
	
	if (x > y && x > z)
		mayor = x;
	
	else if (y > z)
		mayor = y;
	
	else
		mayor = z;
	
	cout<< "el valor mayor es : " << mayor <<endl;
	return 0;
}
