//programa suma de varios numeros 
 //Nombre:Miguel Bennett Valencia
 //Asignatura:Tics B 
 //Docente:Ing.Stalin Francis 
  
 #include<iostream> 
 using namespace std; 
 int main() 
 { 
  
         float x=0,s=0; 
         int i=0,l; 
         cout<<"ingrese el valor de l:  "; 
         cin>>l; 
         do{ 
  
         cout<<"ingrese el valor de x:  "; 
         cin>>x; 
         i=i+1; 
         s=s+x; 
           
         }while(i<l); 
         cout<<"la suma de los numeros fue:  "<<s<<endl; 
         return 0;  

 }
