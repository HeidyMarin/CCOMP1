#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a=*b;
	*b=temp;
	
}

int main() {
	int x, y;
	cout<<"ingrese el primer numero: ";
	cin>>x;
	cout<<"ingrese el segundo numero: ";
	cin>>y;
	swap( x, y);
	cout<<" x ="<< x << endl;
	cout<< " y =" << y;
	
	return 0;
}
