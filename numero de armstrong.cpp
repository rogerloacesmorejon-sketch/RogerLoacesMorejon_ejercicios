#include<iostream>
using namespace std;
int main(){
	int n,n1=0,suma=0;
		cout<< "introduzca numero:";cin>>n;
	n1=n;
	while(n1>0){ 
		suma+=(n1%10)*(n1%10)*(n1%10);	//elevo al cubo el ultimo digito y lo sumo
		cout <<suma<<endl;
	    n1=n1/10; //me deshago del ultimo digito que ya sume.


}
      if(n==suma){
	  cout<<"es un numero de armstrong";
	  }
     else{
     	cout<<"no es un numero de armstrong";
	 }
}
