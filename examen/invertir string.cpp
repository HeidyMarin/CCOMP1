#include <iostream>
using namespace std;

int invertir( char a[], int i, int n)
{
	if(i<n){
		char temp = a[i];
		a[i] = a[n-1];
		a[n-1] = temp;
		return invertir(a, ++i, --n);
	}
}

int main() {
	int n=0;
	char a[] = "Maria";
	cout<<"La palabra es: "<<a<<endl;
	char *p=a;
	for(; *p; p++)
		++n;
	invertir(a, 0, n);
	
	cout<<"\nLa palabra invertida es: "<<a<<endl;
	return 0;
}

