#include<iostream>
using namespace std;
int main(){
	
	int a,b,c;
	a=42;
	c=0;
	cout<< "intenta adivinar el numero secreto: ";     //establezco 3 variables a,b,c  a es el numero secreto  b es la variable a introducir y c es el contador
	    while(b!=a){ c++;                             //realizo el ciclo indefinido en el que uso condicionales para abarcar los diferentes intentos
	    cin>>b;
	    	if (b<a){
	    		cout<<"intento fallido el numero es mayor";
			}
	    	else if(b>a){cout<<"intento fallido el numero es menor"; //la respuesta depende de la variable introducida (si esta es mayor o menor que el numero)
			}
		    else{cout<<"felicidades encontraste el numero en: "<<c<< " intentos";//respuesta final del ciclo 
			     
			     
			}
		
		}
	
}
	
	

