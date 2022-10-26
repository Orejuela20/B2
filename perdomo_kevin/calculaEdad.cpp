//programa modificado  para calcular edad
//nombre:kevin perdomo oliva :)
//asignatura:Tics B
//docente:Ing.Stalin Francis

#include<iostream>
using namespace std;
int main()

{
	int aa,ma,da,an,mn,dn,a,m,d;
	cout<<"ingrese la fecha actual: ";
	cin>>aa>>ma>>da;

	cout<<"ingrese la fecha de nacimiento:  ";
	cin>>an>>mn>>dn;
	if(da>dn){
		d=da-dn;

	}else{
		da=da+30;
		ma=ma-1;
		d=da-dn;

	}
	if(ma>mn){
		m=ma-mn;
	}else{
		ma=ma+12;
		aa=aa-an;
		m=ma-mn;
	}
	a=aa-an;
	cout<<"usted tiene:  "<<a<<"años,"<<d<<"meses,"<<d<<"dias,"<<endl;
	return 0;

}
