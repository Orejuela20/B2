//Autor: Jandry Joseph Martinez Escobar
#include <iostream>
using namespace std;
int main ()
{
	float x,s=0,s1=0,s5=0;
	int i=0,l,i1=0,i5=0;
	cout<<"Ingrese l: ";cin>>l;
	do{

	cout<<"Ingrese x: ";cin>>x;
	i=i+1;
	s=s+x;
	if(x==1){
		i1=i1+1;
		s1=s1+x;
	}else{

		i5=i5+1;
		s5=s5+x;
	}

	}while(i<l);
	cout<<"La cantidad de monedas es: "<<i<<endl;
	cout<<"El valor es: "<<s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<i1<<endl;
	cout<<"El valor es: "<<s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<i5<<endl;
	cout<<"La cantidad de moneda es: "<<s5<<endl;
	return 0;
}
