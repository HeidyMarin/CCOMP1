#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int mayor;

    cout<< "ingrese el valor de x : "<<endl;
    cin>>x;
    cout<< "ingrese el valor de y : "<<endl;
    cin>>y;

    if (x < y)
    {
        cout<< "y es mayor que x "<<endl;
    }
    else
        cout<< "x es mayor que y"<<endl;

    return 0;
}
