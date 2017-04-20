#include <iostream>

using namespace std;

int main()
{
	int n;
	bool a=true;
	while(a){
		cout<<" \nIngrese un numero del 1-9 -> ";
		cin>>n;
		if(n==-1){
			break;
		}
		switch(n)
		{
		case 1:
			cout<<"\n uno "<<endl;
			break;
		case 2:
			cout<<"\n dos "<<endl;
			break;
		case 3:
			cout<<"\n tres "<<endl;
			break;
		case 4:
			cout<<"\n cuatro "<<endl;
			break;
		case 5:
			cout<<" \ncinco "<<endl;
			break;
		case 6:
			cout<<" \nseis "<<endl;
			break;
		case 7:
			cout<<"\n siete "<<endl;
			break;
		case 8:
			cout<<"\n ocho "<<endl;
			break;
		case 9:
			cout<<"\n nueve "<<endl;
			break;
		case 0:
			cout<<"\n cero "<<endl;
			break;
		default:
			cout<<"\nnumero no permitido"<<endl;
			
		}
	}
}
