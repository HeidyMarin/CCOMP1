#include<iostream>
using namespace std;

int potencia(int base, int exponente){
	int resultado=1;
	for (int i=1;i<=exponente; i++){
		resultado=resultado*base;
	}
	return resultado;
	
}
int main(){
	int base,exponente;
	cout<<" ";
	cout<<"ingrese la base: ";
	cin>>base;
	cout<<"ingrese el exponente: ";
	cin>>exponente;
	cout<<"el resultado es: "<<potencia(base,exponente)<<endl;
	return 0;

}
