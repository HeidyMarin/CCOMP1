#include <iostream>

using namespace std;

int main(){
	char l;
	float n,m;
	cout<<"ingrese el operador: ";
	cin>>l;
	cout<<"ingrese el operando: ";
	cin>>m;
	cout<<"ingrese el operando: ";
	cin>>n;
	
	switch(l)
	{
	case '+':
		cout<<m+n<<endl;
		break;
	case '-':
		cout<<m-n<<endl;
		break;
	case '*':
		cout<<m*n<<endl;
		break;
	case '/':
		cout<<m/n<<endl;
		break;
	default:
		cout<<"numero no permitido"<<endl;
		
	}
	return 0;
}
