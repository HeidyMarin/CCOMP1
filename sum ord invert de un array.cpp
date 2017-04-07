#include <iostream>

using namespace std;

int suma(const int array[], const int length)
{
	int suma = 0;
	for(int i=0; i<length; suma += array[i++]);
	return suma;
}

float promedio(const int array[],const int len)
{
	float result = suma(array, len);
	return result/len;
}

void invertir(int array[], int len)
{
	int i, j=len-1, temp;
	for (i=0;i<j; ++i,--j)
	{
		temp=array[i];
		array[i]=array[j];
		array[j]=temp;
	}
}

void ordenar(int array[], int len)
{
	int i, j, mipos, temp;
	for(i=0; i<=len-1; i++)
	{
		mipos = i;
		for(j=i+1; j<=len-1; j++)
		{
			if(array[j]<array[mipos])
				mipos = j;
		}
		temp=array[i];
		array[i]=array[mipos];
		array[mipos]=temp;
	}
}

int main() {
	int array[100];
	int n;

	cout<<"ingrese la cantidad de elementos del arreglo"<<endl;
	cin>>n;
	
	cout<<"ingrese los " << n <<" elementos "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	
	cout<<"\nla suma de los elementos es: "<< suma(array, n) << endl;
	
	cout<<"\nel promedio de los elementos es: "<< promedio(array, n) << endl;
	
	cout<<"\narreglo invertido "<<endl;
	invertir(array, n);
	for(int i=0; i<n; ++i)
	{
		cout << array[i] <<" ";
	}
	cout<<endl;
	
	cout<<"\narreglo ordenado "<<endl;
	ordenar(array, n);
	for(int i=0; i<n; ++i)
	{
		cout << array[i] <<" ";
	}
	cout<<endl;
}
