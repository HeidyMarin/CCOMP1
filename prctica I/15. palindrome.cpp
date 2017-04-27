#include <iostream>
using namespace std;

bool palindrome(char a[], int n)
{
	for(int i=0; i<n/2; i++){
		if(a[i] != a[n-1-i])
			return false;
	}
	return true;
}

int main() 
{
	char palabra[] = "holaloh";
	int n = 7;
	palindrome(palabra, n)? cout<<" true " : cout<<" false ";
//	if(palindrome(palabra, n) == 1)
//		cout<< " true "<<endl;
//	else
//		cout<< " false ";
	return 0;
}

