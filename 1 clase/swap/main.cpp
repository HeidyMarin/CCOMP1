#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int temp;

    cout<< "ingrese el valor de x : "<<endl;
    cin>>x;
    cout<< "ingrese el valor de y : "<<endl;
    cin>>y;

    temp = x;
    x = y;
    y = temp;

    cout << "el valor de x es: " << x << endl;
    cout << "el valor de y es: " << y << endl;
    return 0;
}

// swap sin temp

int main()
{
	int a;
	int b;

	cout<< "ingrese el valor de a : "<<endl;
	cin>>a;
	cout<< "ingrese el valor de b : "<<endl;
	cin>>b;

	a = a^b;
	b = a^b;
	a = a^b;

	cout << "el valor de a es: " << a << endl;
	cout << "el valor de b es: " << b << endl;
	return 0;
}

// swap sin bitset

int main()
{
	int a;
	int b;

	cout<< "ingrese el valor de a : "<<endl;
	cin>>a;
	cout<< "ingrese el valor de b : "<<endl;
	cin>>b;

	a = a + b;
	b = a - b;
	a = a - b;


	cout << "el valor de a es: " << a << endl;
	cout << "el valor de b es: " << b << endl;
	return 0;
}
