#include <iostream>
using namespace std;

void multiplicacion(int a[][2], int b[][2], int x){
	int c[2][2], i, j, result=0;
	for(int k=0; k<x; k++){
		for(i=0; i<x; i++){
			for(j=0; j<x; j++){
				result += (a[i][j] * b[i][j]);
			}
			c[k][i] = result;
			result = 0;
			cout<< c[k][i]<<" ";
		}
		cout<<endl;
	}
}

int main() {
	
	int a[2][2] = {{1,1}, {1,1}};
	int b[2][2] = {{1,1}, {1,1}};
	
	multiplicacion(a, b, 2);
	
	return 0;
}

