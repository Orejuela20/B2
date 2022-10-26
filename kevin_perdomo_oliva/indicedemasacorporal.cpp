
// programa para calcular el peso
//modificado por kevin perdomo
#include<iostream>
using namespace std;
int main()
	{
		float imc,peso,altura;
		cout<<"Ingrese el peso (Kg) : "; cin>>peso;
		cout<<"Ingrese la altura (metros) : "; cin>>altura;
		imc=peso/(altura*altura);
		if(imc<18.5){
			cout<<"Usted tiene bajo peso"<<endl;
		}
		if (imc>=18.5 && imc<24.9){
			cout<<"Usted tiene peso normal"<<endl;
		}
		if(imc>=25 && imc<26.9){
			cout<<"Usted tiene sobrepeso grado I "<<endl;
		}
		if (imc>50){
			cout<<"Usted tiene obesidad tipo iv (extrema)  "<<endl;
		}
	}
