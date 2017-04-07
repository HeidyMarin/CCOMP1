#include <iostream>
using namespace std;

int len_char(char *a){
	int len = 0;
	for(; *a!='\0'; *a++)
		len++;
	return len;
}

int main() {
	char a[]="holaaaa";
//	cout<<"ingrese una palabra :"<< endl;
//	cin>>a;
		
	cout<<"El tamaño de la cadena es: "<< len_char(a)<< endl;
	return 0;
}

