//Autor: Jandry Joseph Martinez Escobar 
#include <iostream>
using namespace std;
int main ()
{
	float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;
	int i=0,l;
	cout<<"Ingrese l: ";cin>>l;
	do{
		cout<<"Ingrese x: ";cin>>x;
		i=i+1;
		s=s+x;
	}while(i<l);
	vb=s;
	viva=vb*piva/100;
	vdesc=vb*pdesc/100;
	vn=vb+viva-vdesc;
	cout<<"El valor a pagar es de: "<<vn<<endl;
	return 0;
}
