#include<iostream>
using namespace std;
int main(){
	
	long n,i;
	cout<< "introduzca un numero para analizar si es primo: ";
	cin>> n;
	 if(n>=2){   //establezco esta condicional ya que no hay numeros menores de 2 que sean primos
	 
	    for(i=2;i<n;i++){   //realizo ciclo con for en el que establezco que la variable i empieza de 2 esta debe ser menor que n y que en cada vuelta va a sumar 1 
	       if (n%i==0){     //si el resto de ese numero n y la variable i es igual a cero eso quiere decir que no es un numero primo y termino una vez que halle un solo numero de i 
	       	cout<<"no primo";
	       	break;
		   }  	
	         	
	      if(i==n-1) {cout<<"primo";}// establezco condicional para que diga una cuando i llega a un valor igual a n-1 entonces quiere decir que el numero es primo 
		  
	    }
	    
	}
	else{cout<<"no es primo";}
	
}
