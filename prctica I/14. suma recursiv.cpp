#include <iostream>

using namespace std;

int sum(int a[], int n)
{
	if(n == 0)
		return 0;
	return sum(a, n+1) + a[n+1];
}

int main()
{
	int n = 4;
	int a[] = {1,4,2,7};
	cout<< "la suma de los elementos es: "<< sum(a, n);
}
