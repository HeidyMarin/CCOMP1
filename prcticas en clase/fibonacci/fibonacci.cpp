#include <iostream>
using namespace std;

int fib(int n)
{
	if(n<=1)
		return n;
	
	int result, a=0, b=1, i;
	for(i=2; i<=n; i++)
	{
		result = a + b;
		a = b;
		b = result;
	}
	return result;
}

int main()
{
	int n;
	cout<< "      FIBONACCI     "<< endl;
	cout<< "\nIngrese el valor a calcular: ";
	cin>>n;
	cout<<"\n Resultado: ";
	cout << fib(n);
	return 0;
}

