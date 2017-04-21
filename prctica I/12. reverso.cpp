#include <iostream>

using namespace std;

void rever(int a[], int n)
{
	int i, temp, j = n - 1;
	for(i=0; i<j; i++, --j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

int main()
{
	int scor[20];
	int e, n, temp, i;
	
	cout<<"ingrese la cantidad de elementos del arreglo"<<endl;
	cin>>n;
	
	cout<<"ingrese los " << n <<" elementos "<<endl;
	for(i=0; i<n; i++)
	{
		cin>>e;
		scor[i] = e;
	}
	
	rever(scor, n);
	
	i=0;
	cout<<" arreglo invertido "<<endl;
	for(i; i<n; ++i)
	{
		cout << scor[i] <<" ";
	}
	return 0;
}

