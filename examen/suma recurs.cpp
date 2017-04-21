#include <iostream>
using namespace std;

int suma(int a[], int n)
{
	if(n == 0)
		return 0;
	return suma(a, n-1) + a[n-1];
}

int main() {
	int a[] = {4};
	int n = 5;
	
	cout<<"La suma de los elementos es: "<< suma(a, n);
	return 0;
}

