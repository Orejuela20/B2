//Autor: Jandry Joseph Martinez Escobar 
#include <iostream>
using namespace std;
int main() 
{
	float x,s=0.0;
	int i=0,l;
	cout<<"Ingrese el valor de l: ";cin>>l;
	do{
		cout<<"Ingrese el valor de x: ";cin>>x;
		i=i+1;
		s=+s+x;

	}while(i<l);
	cout<<"La suma de los numeros es: "<<s<<endl;
	return 0;
}
