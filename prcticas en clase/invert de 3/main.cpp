#include <iostream>

using namespace std;

int main()
{
    int scor[3];
    int e, n, temp, i, j;

    cout<<"ingrese la cantidad de elementos del arreglo"<<endl;
    cin>>n;
    j = n - 1;

    cout<<"ingrese los " << n <<" elementos "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>e;
        scor[i] = e;
    }

    for(i=0; i<=n; i++, --j)
    {
        temp = scor[i];
        scor[i] = scor[j];
        scor[j] = temp;
    }

    i=0;
    cout<<" arreglo invertido "<<endl;
    for(i; i<n; ++i)
    {
        cout << scor[i] <<",";
    }
    return 0;
}
