#include <iostream>
using namespace std;
int main(){
    int filas=3;
    int cols=3;

    cout<<"digite filas: ";cin>>filas;
    cout<<"digite columnas: ";cin>>cols;

    //DECLARACION DE MATRIZ DINAMICA
    int **matriz = new int*[filas];
    for(int i=0;i<3;i++){
        matriz[i]=new int [cols];
    }
    
    
    cout<<"\n";
    cout<<"ingrese numeros que llevara la matriz: "<<endl;
    for(int i=0;i<filas;i++){
        for(int j=0;j<cols;j++){
            cout<<"("<<i<<") "<<"("<<j<<")"<<": ";cin>>matriz[i][j];
        }
    }
    cout<<"\n--------------------------------------";

    cout<<"matriz original: \n";
    for(int i=0;i<filas;i++){
        for(int j=0;j<cols;j++){
            cout<<matriz[i][j];
        }
        cout<<endl;
    }
    
    cout<<"\n--------------------------------------";
    cout<<"matriz transpuesta: \n";

    for(int i=0;i<filas;i++){
        for(int j=0;j<cols;j++){
            cout<<matriz[j][i];
        }
        cout<<endl;
    }

    //LIMPIAR MEMORIA
    for(int i=0;i<filas;i++){
        delete[] matriz[i];
    }

    delete[] matriz;

    return 0;
}
