#include<iostream>
using namespace std;
int main(){
     int n,i;              //establezco variables
     int suma=0;
     cin>>n;
     for(i=1;i<n;i++){    //establezco un ciclo definido en el que la variable i va ha ir aumentando su valor desde 1 hasta que sea menor que n
     	if(n%i==0){
     		suma+=i;      // establezco una condicional dentro del ciclo para que si n%i es igual a 0 sume el numero a la variable suma 
     		
		 }
     
		 
	 }
	if(suma==n){                  // condicional fuera del ciclo para decir si el numero es perfecto o no en dependecia de si suma es igual a n
     		cout<<"es perfecto";
		 }
		 else{cout<<"no es perfecto";
		 }

}
