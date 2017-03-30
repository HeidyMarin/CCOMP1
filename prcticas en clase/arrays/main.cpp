#include <iostream>

using namespace std;

int main()
{
    int scor[5];
    int e;
    cout<<"ingrese los 5 elementos "<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>e;
        scor[i] = e;
    }

    cout<<"los elementos del arreglo son: "<<endl;
    for(int i; i<5; i++)
    {
        cout << scor[i] <<",";
    }
    return 0;
}
