#include <iostream>
using namespace std;

int fib(int n)
{
	if(n<=1)
		return n;
	return fib(n-1) + fib(n-2);
}

int main()
{
	int n;
	cout<< "     FIBONACCI     "<< endl;
	cout<< "\nIngrese el valor a calcular: ";
	cin>>n;
	cout<<"\n Resultado: ";
	cout << fib(n);
	return 0;
}

