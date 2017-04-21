#include <iostream>
using namespace std;

int multiplicacion(int x_1, int y_1, int x_2, int y_2)
{
	int a[20][20], b[20][20], c[20][20];
	cout << "Ingrese los valores de la matriz a "<<endl;
	for(int i=0; i<x_1; ++i)
		for(int j=0; j<y_1; ++j){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
	}
		cout <<endl;
		
		cout <<"Ingrese los valores de la matriz b :"<<endl;
		for(int i=0; i<x_2; ++i)
			for(int j=0; j<y_2; ++j){
				cout<<"b["<<i<<"]["<<j<<"]: ";
				cin>>b[i][j];
		}
			cout <<endl;
			
			// Inicializamos la matriz c.
			for(int i=0; i<x_1; ++i)
				for(int j=0; j<y_2; ++j)
					c[i][j] = 0;
			
			// Generamos la matriz c.
			for(int i=0; i<x_1; ++i)
				for(int j=0; j<y_2; ++j)
					for(int z=0; z<x_2; ++z)
						c[i][j] += a[i][z] * b[z][j];
			
			cout<<"\nMatriz a: ";
			cout << endl;
			for(int i=0; i<x_1; ++i)
			{
				for(int j=0; j<y_1; ++j)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
			
			cout<<"\nMatriz b: ";
			cout << endl;
			for(int i=0; i<x_2; ++i)
			{
				for(int j=0; j<y_2; ++j)
				{
					cout<<b[i][j]<<" ";
				}
				cout<<endl;
			}
			
			cout<<"\nMatriz c: ";
			cout << endl;
			for(int i=0; i<x_1; ++i)
			{
				for(int j=0; j<y_2; ++j)
				{
					cout<<c[i][j]<<" ";
				}
				cout<<endl;
			}
}

int main()
{
	multiplicacion(2,2,2,3);
	return 0;
}

