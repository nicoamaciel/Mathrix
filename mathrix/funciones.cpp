#include <iostream>


using namespace std;

#include "funciones.h"

void mostrarMatriz(int matriz[][6], int a, int b){

int x=0;
int y=0;

    for (int i=0; i<12; i++){
        for(int j=0; j<6; j++){
            if (i<12 && i%2==1){
              cout << "____";
            }
            else{
                cout << "  "<<matriz[x][y]<<" ";
                y++;
            }
            if (j<6){
                cout << "|";
            }
        }
        y=0;
        if(i%2==0){
            x++;
        }
        cout << endl;

    }

}

int busquedaInicial (int num1, int num2, int num3[][6]){
int valor=0;
for (int i=0; i<6; i++){
    for (int j=0; j<6; j++){
        if (i==num1 && j==num2){
            valor=num3[i][j];

        }
    }
}

return valor;


}

void mostrarMatriz2(int matriz [][6], int a, int b){
int x=0;
int y=0;

    for (int i=0; i<12; i++){
        for(int j=0; j<6; j++){
            if (i<12 && i%2==1){
              cout << "____";
            }
            else{
                if(i==0 && j<3){
                cout << "    ";
                y++;
                }
                else{
                cout << "  "<<matriz[x][y]<<" ";
                y++;
                }
            }
            if (j<6){
                cout << "|";
            }
        }
        y=0;
        if(i%2==0){
            x++;
        }
        cout << endl;

    }

}

/*int funcion_suma1(int direccion, int fila, int colum,int resultado, int matriz[][6]){
    int validacion=1;
    if(direccion==1){
        for (int i=0; i<6; i++){
            for (int j=0; j<6; j++){
                if(i==fila && j==colum){
                    if(resultado+matriz[i][j+1]==matriz[i][j+2]){
                    return validacion;
                }
            }
        }
    }

  }

}
Final**/







