#include <iostream>
using namespace std;

void merge(int A[],int p,int q,int r){/*inicio mitad tamaño*/
	int n,m,i,j,k;
	n=q-p+1;
	m=r-q;
	
	int L[n+1],R[m+1];
	for(i=1;i<=n;i++)
		L[i]=A[p+i-1];
	for(j=1;j<=m;j++)
		R[j]=A[q+j];
	L[i]=999999;
	R[j]=999999;
	i=1;
	j=1;
	for(k=p;k<=r;k++){
		if(L[i]<=R[j]){
			A[k]=L[i];
			i+=1;
		}
		else{
			A[k]=R[j];
			j+=1;}
	}
}

void mergesort(int a[], int p, int r){
	if(p<r){
		int q=((p + r)/2);
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
}

int main(){
	int a[10]={10,2,5,3,40,8,7,1,6,9};
	mergesort(a,0,10);
	int j;
	for(j=0;j<10;j++)
		cout<<a[j];
}
