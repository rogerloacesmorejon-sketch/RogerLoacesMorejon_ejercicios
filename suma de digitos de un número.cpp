#include<iostream>
using namespace std;
int main(){
	long n=0,suma=0;
		cout<< "introduzca numero:";cin>>n;
	
	while(n>0){ 
		suma+=n%10;	//sumo el ultimo digito
	    n=n/10; //me deshago del ultimo digito que ya sume.
	    
	}
	 cout << "La suma de los digitos es:"<<suma;
	
} 
