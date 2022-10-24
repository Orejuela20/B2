//programa punto de ventas 
//nombre:kevin perdomo oliva :)
//asignatura:Tics B
//docente:Ing.Stalin Francis
 
#include<iostream>
using namespace std;
int main()

{      

	float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;
	int i=0,l;
	cout<<"ingrese l:  ";cin>>l;
	do{
	
	cout<<"ingrese x:  ";cin>>x;
	i=i+1;
	s=s+x;
	
	}while(i<l);
	vb=s;
	viva=vb*piva/100;
	vdesc=vb*pdesc/100;
	vn=vb+viva-vdesc;
	cout<<"el valor a pagar es de:  "<<vn<<endl<<endl;
	return 0;

}
