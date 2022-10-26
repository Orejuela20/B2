//programa creado para conocer el saldo final
//nombre:Orejuela Jefferson
//asignatura: Tics B
//docemte: Ing.Stalin Francis

#include<iostream>
using namespace std;
int main()

{
	float x,s=0;
	int i=0,l;
	cout<<"ingrese cantidad de egreso (l):  ";
		cin>>l;
        cout<<"ingrese saldo inicial (s):  ";
	cin>>s;

	do{
	
	cout<<"ingrese egreso (x):  ";
	cin>>x;
	i=i+1;
	s=s+x;
	}while(i<l);
	cout<<"el saldo final es:  "<<s<<endl;
	return 0;

}
