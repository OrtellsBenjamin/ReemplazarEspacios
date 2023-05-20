#include<bits/stdc++.h>
using namespace std;
string ReemplazarEspacios(string frase);
int main(){
	string frase;
	cout<<"Ingrese una frase:"<<endl;
	getline(cin,frase);
	string Resultado=ReemplazarEspacios(frase);
	cout<<"La palabra convertida es:"<<Resultado;
	return 0;
}
string ReemplazarEspacios(string frase){
	string espacio;
	for(int i=0;i<frase.size();i++){
		if(frase[i]==' '){
		  frase[i]='_'; 
		}	
		espacio+=frase[i];
		}
	return espacio;
}
