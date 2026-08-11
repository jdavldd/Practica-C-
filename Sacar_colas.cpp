#include <iostream>
#include <stdlib.h>
using namespace std;

    struct nodo{
        int dato;
        nodo *siguiente;
    };

    bool colaVacia(nodo*);
    void suprimirCola(nodo*&, nodo*&, int n);
    void ingresarCola(nodo*&, nodo*&, int n);

int main(){
    nodo* frente=NULL;
    nodo* fin=NULL;

    return 0;
}

bool colaVacia(nodo *frente){
    return (frente==NULL);
}

void suprimirCola(nodo*&frente, nodo*&fin, int n){
    n = frente->dato;
    nodo *aux = frente;

    if(frente==fin){
        frente=NULL;
        fin=NULL;
    }else{
        frente=frente->siguiente;
    }    
    delete aux;
}

void ingresarCola(nodo*&frente, nodo*&fin, int n){
    nodo *nuevo_nodo = new nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(colaVacia(frente)){
        frente=nuevo_nodo;
    }else{
        fin->siguiente=nuevo_nodo;
    }
    fin=nuevo_nodo;
}