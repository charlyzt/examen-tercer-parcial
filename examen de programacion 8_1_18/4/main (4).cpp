#include <iostream>
/*Pedir cinco números y mostrarlos ordenados de mayor a menor, sin embargo, solo se aceptan números pares y no se pueden repetir.*/
using namespace std;
int main(int argc, char** argv) 
{ 
 ////////////variables///////////////////
  int num1=0; 
  int num2=0;
  int num3=0;
  int aux=0;   
  /////////////////////////////////////////
  system("color A");
  
    do{
    	
    int ma;	
    	
   
       cout<<"\t\t********************************** \n";
       cout<<"\t\t\t______ingresa solo numeros que sean pares____\n\n\n";
	   cout<<"\t\t\tIngresa el primer numero 1"<<endl; 
       cin>>num1;
       if (num1)
       cout<<"\t\t\tIngresa el segundo numero 2"<<endl;
       cin>>num2;
       cout<<"\t\t\tIngresa el tercer numero 3"<<endl;
       cin>>num3;

    }while(num1>=2 % num2>2==0 % num3>2==0);

    if(num1<num2) 
    { 
   aux=num2; 
   num2=num1; 
   num1=aux; 
   }


if(num2<num3) 
{ 
aux=num2; 
num2=num3; 
num3=aux; 
} 

if(num1<num2) 
{ 
aux=num1; 
num1=num2; 
num2=aux; 
} 

cout<<"\nLos numeros ordenados de mayor a menor son:"<<num1<<","<<num2<<","<<num3<<endl; 

return 0;
}
