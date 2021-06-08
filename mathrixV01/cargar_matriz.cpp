#include <iostream>
using namespace std;
#include "cargar_matriz.h"


void cargar_tablero (int mat[][6], int num1, int num2){
int i, j;
for(i=0; i<num1; i++){
    for(j=0; j<num2; j++){
        mat[i][j]= rand () % 9;
    }
}

}

void mostrar_tablero (int mat[][6], int num1, int num2){
int i, j;
for(i=0; i<num1; i++){
    for(j=0; j<num2; j++){
        cout << mat[i][j];
    }
    cout << endl;
}

}


