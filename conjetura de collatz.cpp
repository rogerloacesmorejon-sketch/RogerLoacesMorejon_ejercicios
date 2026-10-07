#include<iostream>
using namespace std;
int main(){
     long n,c;         //variables ha usar n es el numero a introducir mientras que c es el numero de pasos 
     cin>>n;
     while(n!=1){
     	c++;
     	if(n%2==0){
     		n/=2;    
		 }
		 else{
		 	n=n*3+1;    
		 }                // ciclo realizado para el cumplimiento de la regla de la conjetura de collatz
	 }
     cout<<c <<"pasos";


}
	
