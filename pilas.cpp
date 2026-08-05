#include <iostream>
#include <stdlib.h>
using namespace std;

    struct nodo{
        int dato;
        nodo *siguiente;
    };

    void ingresarPila(nodo*&, int);
    void sacarPila(nodo*&, int&);
    int obtenerCima(nodo*);
    void vaciarPila(nodo*&);
    void mostrarPila(nodo*);
    void contarElementos(nodo*);
    int buscarPila(nodo*, int);

int main(){
    nodo *pila=NULL;
    nodo *pares=NULL;
    nodo *impares=NULL;
    int num, e;

    for(int i=1;i<=5;i++){
        cout<<"ingresar numero: ";cin>>num;
        ingresarPila(pila, num);
    }
    
    while(pila!=NULL){
        sacarPila(pila, num);
        if(num%2==0){
            ingresarPila(pares, num);
        }else{
            ingresarPila(impares, num);
        }
    }
    cout<<endl;
    mostrarPila(pares);
    mostrarPila(impares);


    return 0;
}   

void ingresarPila(nodo *&pila, int n){
    nodo *nuevo_nodo=new nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;
}

void sacarPila(nodo *&pila, int &n){
    nodo *aux = pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}

int obtenerCima(nodo*pila){
    if (pila==NULL){ //VERIFICA SI PILA TIENE UN NUMERO
        std::cout<<"pila vacia";
        return -1;    //COMO ESTÁ VACIA RETORNA 0 PARA FINZALZAR
    }
        return pila->dato; //SI NO ESTÁ VACÍA VA A RETORNAR EL DATO EN LA PILA
}

void vaciarPila(nodo*&pila){
    int aux;
    while(pila!=NULL){
        sacarPila(pila, aux);
    }
}

void mostrarPila(nodo *pila){
    nodo* aux = pila;
        while(aux!=NULL){
            cout<<aux->dato<<endl;
            aux=aux->siguiente;
        }
}

//ME QUEDÉ AQUI
void contarElementos(nodo *pila){
    nodo *aux = pila;
    int cont=0;
        while(aux!=NULL){
            aux=aux->siguiente;
            cont++;
        }
        cout<<cont<<endl;
}

int buscarPila(nodo*pila, int valor){
    nodo*aux=pila;
        while(aux!=NULL){
            if(valor==aux->dato){
                return true;
            }
            aux=aux->siguiente;
        }
        return false;
}
