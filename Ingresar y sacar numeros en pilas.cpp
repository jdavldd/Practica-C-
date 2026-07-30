#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
    int dato;
    nodo *siguiente;
};

void ingresarNodo(nodo *&, int);
void sacarNodo(nodo *&, int&);

int main(){
    int dato;
    nodo *pila=NULL;

    cout<<"\ningresa un numero: ";cin>>dato;
    ingresarNodo(pila, dato);
    cout<<"\ningresa otro numero: ";cin>>dato;
    ingresarNodo(pila, dato);

    cout<<"\n sacando pilas.. ";

    while(pila!=NULL){
        sacarNodo(pila, dato);
        if(pila!=NULL){
            cout<<dato<<endl;
        }else{
            cout<<"."<<endl;
        }
    }

    return 0;
}

void ingresarNodo(nodo *&pila, int n){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;
    cout<<n<<endl;
}

void sacarNodo(nodo *&pila, int &n){
    nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
    cout<<n<<endl;
}