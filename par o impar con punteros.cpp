#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	
	int numero;
	int* pDireccion;
	
	cout<<"digite el numero: ";cin>>numero;
	
	pDireccion=&numero;
	
	if(*pDireccion%2==0){
		cout<<"numero: "<<*pDireccion<<" es par"<<endl;
		cout<<"direccion: "<<pDireccion<<endl;
	}else{
		cout<<"numero: "<<*pDireccion<<" es impar"<<endl;
		cout<<"direccion: "<<pDireccion<<endl;
	}
	
	getch();
	return 0;
}