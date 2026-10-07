#include<iostream>
using namespace std;
int main(){
	
	long numero,numerotemp,numeroinv,ultimodigito; //defino variables 
	do {
		cout<< "introduzca numero:";cin>>numero;   // sanitizar la entrada  es decir asegurar la no entrada de numeros negativos 
	} while (numero<0);
	
	numerotemp=numero; // uso una variable temporal para no perder el numero original introducido
	while(numerotemp>0){ 
		ultimodigito=numerotemp%10;  //sacar el ultimo digito
		if (numerotemp==numero){
			numeroinv=ultimodigito; 
		} 
		else {
			numeroinv=numeroinv*10 + ultimodigito;
		}                          //en este ciclo al sacar el ultimo digito en un nuevo valor para añadirle el siguiente digito ese ultimo digito lo multiplico *10 y le sumo el siguiente
		numerotemp=numerotemp/10;     //para eliminar el ultimo digito 
	}
	if(numero==numeroinv){cout<<"Capicua";} else {cout<<"No capicua";} // condicional que me permite identificar si el numero es capicua o no 
	
	    
	    
}
	 
