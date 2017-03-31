#include <iostream>

using namespace std;

int main() {
	int a[10];
	int element, n, temp, i, j, suma=0, mayor=0;
	
	cout<<"ingrese la cantidad de elementos del arreglo"<<endl;
	cin>>n;
	j = n - 1;
	
	cout<<"ingrese los " << n <<" elementos "<<endl;
	for(i=0; i<n; i++)
	{
		cin>>element;
		a[i] = element;
		suma = suma + element;
	}
	
	for (i=0; i<n; i++)
	{
		mayor = (a[i]>mayor)?a[i]:mayor;
	}
	
	for (i=0;i<j; ++i,--j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	
	i=0;
	cout<<" arreglo invertido "<<endl;
	for(i; i<n; ++i)
	{
		cout << a[i] <<" ";
	}
	cout<<endl;
	cout<<"la suma de los elementos es: "<< suma << endl;
	cout<<"el mayor de los elementos es: "<< mayor << endl;
}
