#include <iostream>

using namespace std;

int main()
{
	int n;
	while(n != -1){
		cout<<"\nIngrese un numero: ";
		cin>>n;
		if(n == -1){
			break;
		}
		
		if (n%2 == 0){
			cout<<"\n ->El numero ingresado es par"<<endl;
		}else {
			cout<<"\n ->El numero ingresado es impar"<<endl;
		}
	}
	return 0;
}
