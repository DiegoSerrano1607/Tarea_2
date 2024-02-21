#include <iostream>
using namespace std; 
main(){
	//numero positivo>0 o negativo<0 
	/*int num=0;
	cout<<"Ingrese el numero: ";
	cin>>num;
	if(num>0){
		//entonces entra aca cuando la condicion es verdadera
		cout<<"POSITIVO"<<endl;
	}else{	
		if(num==0){
			cout<<"NEUTRO"<<endl;
		}else{
			cout<<"NEGATIVO"<<endl;
		}
	}*/
	
	/*
	string pais="";
	cout<<"Ingrese el pais: ";
	cin>>pais;
		if(pais=="guatemala"){
			cout<<"Yo soy de "<<pais<<" mi pais."<<endl;
		}else{
			cout<<pais<<endl;
		}
	*/	
	
	//Determinar si un numero es par o impar//
	
	/*int num=0;
	cout<<"Ingrese numero: ";
	cin>>num;
	//si al dividir un numero entre dos su residuo es cero entonces es par, caso contrario es impar
	if ((num%2)==0){
		cout<<"PAR"<<endl;
	}else{
		cout<<"IMPAR"<<endl;
	}
	*/
	
	// and (y) && //
	// or (o) || //
	
	//puede entrar a la clase si trae un lapiz y un lapicero//
	char lapiz,lapicero,cuaderno;
	cout<<"Trae lapiz? (s/n): ";
	cin>>lapiz;
	cout<<"Trae lapicero? (s/n): ";
	cin>>lapicero;
	cout<<"Trae cuaderno? (s/n): ";
	cin>>cuaderno;
	
	//Puede entrar a la clase si trae un lapiz o un lapicero y un cuaderno//
	
	if((lapiz=='s' || lapicero=='s') && cuaderno=='s'){
		cout<<"Ingrese"<<endl;
	}else{
		cout<<"Lo siento no puede ingresar"<<endl;
	}
	system("pause");
}


