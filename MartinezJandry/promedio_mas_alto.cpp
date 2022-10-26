//Autor: Jandry Joseph Martinez Escobar
#include <iostream>
using namespace std;
int main ()
{
	float x,pm=0;
	int i=0,l;
	cout<<"Ingrese l: ";cin>>l;
	do{

	cout<<"Ingrese x: ";cin>>x;
	i=i+1;
	if(x>pm){
		pm=x;
	}

	}while(i<l);
	cout<<"El promedio maximo del curso es: "<<pm<<endl;
	return 0;
}
