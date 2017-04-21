#include <iostream>
using namespace std;

void invertir(int a[], int n)
{
    for(int i=0 ; i<n/2 ; ++i)
    {
        int tmp = *( a + i ) ;
        int fin = n-i-1;
        *( a + i ) = *( a + fin ) ;
        *( a + fin ) = tmp ;
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
