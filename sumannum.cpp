//programa suma de varios numeros
//nombre:Orejuela Jefferson
//asignatura:Tics B
//docente:Stalin Francis
 
#include<iostream>
using namespace std;

int main()
{

 float x,s;
 int i=0,l;
 cout<<"ingrese el valor de l:  ";
 cin>>l;
 do{

cout<<"ingrese el valor de x:  ";
cin>>x;
i=i+1;
s=s+x;

 }while(i<l);

 cout<<"la suma de los numeros fue:  "<<s<<endl;
 return 0;
}
