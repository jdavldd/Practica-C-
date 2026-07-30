#include <iostream>
using namespace std;

    struct nodo{
        int dato;
        nodo *siguiente;
    };

    void ingresarNodo(nodo *&, int);
    void sacarNodo(nodo *&, int &);

int main(){
    int dato, opcion, n_ingresar;
    nodo *pila=NULL;
    bool menu=true;

    while(menu){

    cout<<"*********************************************\n";
    cout<<"* 1. Insertar caracter a la pila            *\n";
    cout<<"* 2. Mostrar todos los elementos de la pila *\n";
    cout<<"* 3. Salir                                  *\n";
    cout<<"*********************************************\n";
    cout<<"Elija la opción(1,2,3): ";cin>>opcion;
    while(opcion!=1 && opcion!=2 && opcion!=3){
    cout<<"Elija la opción(1,2,3): ";cin>>opcion;
    }

    switch(opcion){
        case 1:
            cout<<"cantidad de numeros a ingresar: ";cin>>n_ingresar;
                for(int i=0;i<n_ingresar;i++){
                    cout<<"ingrese numero: ";cin>>dato;
                    ingresarNodo(pila, dato);
                }
                cout<<endl;
        break;
        case 2:
            while(pila!=NULL){
                sacarNodo(pila, dato);
                cout<<dato<<endl;
            }
            cout<<endl;
        break;
        case 3:
            system("cls");
            menu=false;
        break;
    }

    }

    return 0;
}

void ingresarNodo(nodo *&pila, int n){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;
}

void sacarNodo(nodo*&pila, int& n){
    nodo *aux = pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}