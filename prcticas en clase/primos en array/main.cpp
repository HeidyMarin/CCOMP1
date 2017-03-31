#include <iostream>

using namespace std;

int main (){
    int a[100],b[100],i,j=0,div,cont=0;

    for (i=0; i<100 ;i++)
    {
        a[i]=i;
    }

    for(i=0; i<100; i++)
    {
        div=2;
        while(div<a[i] && a[i]%div>0)
            div++;
        if(div==a[i]){
            b[j++]=a[i];
            cont++;
        }
    }
    if(cont>0){
        cout<<"\nLos numeros primos son:"<<endl;
        for(i=0;i<j;i++)
        cout<<b[i]<<" ";
    }
    else cout<<"\nNo hay numeros primos en su arreglo";

}
