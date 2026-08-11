
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

    struct nodo{
        int dato;
        nodo *siguiente;
    };

    void ingresarCola(nodo*&frente, nodo*&fin, int n);
    bool colaVacia(nodo *frente);

int main(){
    nodo *fin=NULL;
    nodo *frente=NULL;
    int num;

    for(int i=0;i<=3;i++){
        cout<<"numeros: ";cin>>num;
        ingresarCola(frente, fin, num);
    }

    getch();
    return 0;
}

bool colaVacia(nodo *frente){
    return (frente==NULL);
}

void ingresarCola(nodo*&frente, nodo*&fin, int n){
    //Creando espacio en memoria para el nodo
    nodo *nuevo_nodo = new nodo();

    //el nodo almacena el dato
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente=NULL;

    //si la cola esta vacia, frente y fin van a ser igual al mismo nodo
    if(colaVacia(frente)){
        frente = nuevo_nodo;
    }
    //si no está vacia, fin va a ser igual al ultimo numero ingresado
    else{
        fin -> siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}