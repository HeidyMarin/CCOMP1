#include <iostream>
using namespace std;

int main()
{
	int lista[100], cantidad, cont=0;;
	
	cout<< "ingrese la cantidad de numeros primos: "<<endl;
	cin>>cantidad;
	
	for (int i=0; i!=100;i++)
	{
		lista[i]=i;
	}
	
	for (int i=2;i<=100;i++)
	{
		int a=0;
		for(int j=1;j<=100;j++)
		{
			if(i%j==0)
				a++;
			if(a==3)
				break;
		}
		
		if (a==2 && cont<cantidad)
		{
			cout << lista[i] << " ";
			cont++;
		}
	}
	return 0;
}
