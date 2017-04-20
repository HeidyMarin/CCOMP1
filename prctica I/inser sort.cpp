#include <iostream>
using namespace std;

void insertionsort(int a[],int size){
	int i,key,temp;
	for(i=1;i<size;i++){
		key=i;
		while(key>0 && a[key]< a[key-1]){
			temp=a[key];
			a[key]=a[key-1];
			a[key-1]=temp;
			key--;
		}
	}
	
	int j;
	for(j=0;j<size;j++){
		cout<<a[j]<<" ";
	}
}


int main(){
	int a[10]={10,2,5,3,40,8,7,1,6,9};
	insertionsort(a,10);
//	mergesort(a,0,10);
//	int j;
//	for(j=0;j<10;j++)
//		cout<<a[j];
}
