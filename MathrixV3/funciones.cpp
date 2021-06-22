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

void mostrarMatriz1(int matriz [][6], int a, int b){


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
                    if(i==2 && j==5){
                        cout << "    ";
                        y++;
                    }
                    else{
                        if(i==4 && j==5){
                        cout << "    ";
                        y++;
                        }
                        else{
                            if(i==0 && j==5){
                            cout << "    ";
                            y++;
                            }
                            else{
                            cout << "  "<<matriz[x][y]<<" ";
                            y++;
                            }

                        }

                    }

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

void mostrarMatriz3(int matriz [][6], int a, int b){


int x=0;
int y=0;

    for (int i=0; i<12; i++){
        for(int j=0; j<6; j++){
            if (i<12 && i%2==1){
              cout << "____";
            }
            else{
                if(i==0 && j==5){
                cout << "    ";
                y++;
                }
                else{
                    if(i==2 && j==5){
                    cout << "    ";
                    y++;
                    }
                    else{
                        if(i==4 && j==5){
                        cout << "    ";
                        y++;
                        }
                        else{
                            cout << "  "<<matriz[x][y]<<" ";
                            y++;
                        }
                    }
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

void mostrarMatriz4(int matriz [][6], int a, int b){

int x=0;
int y=0;

    for (int i=0; i<12; i++){
        for(int j=0; j<6; j++){
            if (i<12 && i%2==1){
              cout << "____";
            }
            else{
                if(i==2 && j<3){
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

void mostrarMatriz5(int matriz [][6], int a, int b){

int x=0;
int y=0;

    for (int i=0; i<12; i++){
        for(int j=0; j<6; j++){
            if (i<12 && i%2==1){
              cout << "____";
            }
            else{
                if(i==6 && j==0){
                cout << "    ";
                y++;
                }
                else{
                    if(i==8 && j==0){
                    cout << "    ";
                    y++;
                    }
                    else{
                        if (i==10 && j==0){
                        cout << "    ";
                        y++;
                        }
                        else{
                            cout << "  "<<matriz[x][y]<<" ";
                            y++;
                        }
                    }
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

void mostrarMatriz6(int matriz [][6], int a, int b){

int x=0;
int y=0;

    for (int i=0; i<12; i++){
        for(int j=0; j<6; j++){
            if (i<12 && i%2==1){
              cout << "____";
            }
            else{
                if(i==6 && j==3){
                cout << "    ";
                y++;
                }
                else{
                    if(i==6 && j==4){
                    cout << "    ";
                    y++;
                    }
                    else{
                        if (i==6 && j==5){
                        cout << "    ";
                        y++;
                        }
                        else{
                            cout << "  "<<matriz[x][y]<<" ";
                            y++;
                        }
                    }
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

void mostrarMatriz7(int matriz [][6], int a, int b){

int x=0;
int y=0;

    for (int i=0; i<12; i++){
        for(int j=0; j<6; j++){
            if (i<12 && i%2==1){
              cout << "____";
            }
            else{
                if(i==2 && j==0){
                cout << "    ";
                y++;
                }
                else{
                    if(i==4 && j==0){
                    cout << "    ";
                    y++;
                    }
                    else{
                        if (i==6 && j==0){
                        cout << "    ";
                        y++;
                        }
                        else{
                            cout << "  "<<matriz[x][y]<<" ";
                            y++;
                        }
                    }
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




/** Funcion puntos */



/*void mostrarMatriz9(int matriz [][6], int a, int b)*/
/*void mostrarMatriz10(int matriz [][6], int a, int b)*/
/*void mostrarMatriz11(int matriz [][6], int a, int b)*/
/*void mostrarMatriz12(int matriz [][6], int a, int b)*/
/*void mostrarMatriz13(int matriz [][6], int a, int b)*/
/*void mostrarMatriz13(int matriz [][6], int a, int b)*/
/*void mostrarMatriz14(int matriz [][6], int a, int b)*/
/*void mostrarMatriz15(int matriz [][6], int a, int b)*/
/*void mostrarMatriz16(int matriz [][6], int a, int b)*/
/*void mostrarMatriz17(int matriz [][6], int a, int b)*/
/*void mostrarMatriz18(int matriz [][6], int a, int b)*/
/*void mostrarMatriz19(int matriz [][6], int a, int b)*/
/*void mostrarMatriz20(int matriz [][6], int a, int b)*/
/*void mostrarMatriz21(int matriz [][6], int a, int b)*/
/*void mostrarMatriz22(int matriz [][6], int a, int b)*/
/*void mostrarMatriz23(int matriz [][6], int a, int b)*/
/*void mostrarMatriz24(int matriz [][6], int a, int b)*/
/*void mostrarMatriz25(int matriz [][6], int a, int b)*/
/*void mostrarMatriz26(int matriz [][6], int a, int b)*/
/*void mostrarMatriz27(int matriz [][6], int a, int b)*/
/*void mostrarMatriz28(int matriz [][6], int a, int b)*/
/*void mostrarMatriz29(int matriz [][6], int a, int b)*/
/*void mostrarMatriz30(int matriz [][6], int a, int b)*/
/*void mostrarMatriz31(int matriz [][6], int a, int b)*/
/*void mostrarMatriz32(int matriz [][6], int a, int b)*/
/*void mostrarMatriz33(int matriz [][6], int a, int b)*/
/*void mostrarMatriz34(int matriz [][6], int a, int b)*/
/*void mostrarMatriz35(int matriz [][6], int a, int b)*/
/*void mostrarMatriz36(int matriz [][6], int a, int b)*/




int funcionPantalla (int inicial, int matriz[][6], int operacion, int direccion){


    for (int i=0; i<6; i++){
        for (int j=0; j<6 ;j++){
            if(matriz[0][0]==inicial){
                //suma
                if(operacion==1 && direccion==1){
                    if(inicial+matriz[i][j+1]==matriz[i][j+2]){
                     return 1;
                    }
                }
                //resta
                if(operacion==2 && direccion==1){
                    if(inicial-matriz[i][j+1]==matriz[i][j+2]){
                     return 1;
                    }
                }
                //Multiplicacion
                if(operacion==3 && direccion==1){
                    if(inicial*matriz[i][j+1]==matriz[i][j+2]){
                     return 1;
                    }
                }
                //division
                if(operacion==4 && direccion==1){
                    if(inicial/matriz[i][j+1]==matriz[i][j+2]){
                     return 1;
                    }
                }
                //resto
                if(operacion==4 && direccion==1){
                    if(inicial%matriz[i][j+1]==matriz[i][j+2]){
                     return 1;
                    }
                }

            }

        }
    }

}

int funcionPantalla3 (int inicial, int matriz[][6], int operacion, int direccion){


    bool validar=false;

    for (int i=0; i<6; i++){
        for (int j=0; j<6 ;j++){
            if(matriz[0][5]==inicial){
                //suma
                if(operacion==1 && direccion==3){
                    if(inicial+matriz[i+1][j]==matriz[i+2][j]){
                     return 3;

                    }
                }
                //resta
                if(operacion==2 && direccion==3){
                    if(inicial-matriz[i+1][j]==matriz[i+2][j]){
                     return 3;

                    }
                }
                //Multiplicacion
                if(operacion==3 && direccion==3){
                    if(inicial*matriz[i+1][j]==matriz[i+2][j]){
                     return 3;

                    }
                }
                //division
                if(operacion==4 && direccion==3){
                    if(inicial/matriz[i+1][j]==matriz[i+2][j]){
                     return 3;

                    }
                }
                //resto
                if(operacion==4 && direccion==3){
                    if(inicial%matriz[i+1][j]==matriz[i+2][j]){
                     return 3;

                    }
                }
            }
        }
    }


}

int funcionPantalla4 (int inicial, int matriz[][6], int operacion, int direccion){

    bool validar=false;

    for (int i=0; i<6; i++){
        for (int j=0; j<6 ;j++){
            if(matriz[1][0]==inicial){
                //suma
                if(operacion==1 && direccion==1){
                    if(inicial+matriz[i][j+1]==matriz[i][j+2]){
                     return 4;

                    }
                }
                //resta
                if(operacion==2 && direccion==1){
                    if(inicial-matriz[i][j+1]==matriz[i][j+2]){
                     return 4;

                    }
                }
                //Multiplicacion
                if(operacion==3 && direccion==1){
                    if(inicial*matriz[i][j+1]==matriz[i][j+2]){
                     return 4;

                    }
                }
                //division
                if(operacion==4 && direccion==1){
                    if(inicial/matriz[i][j+1]==matriz[i][j+2]){
                     return 4;

                    }
                }
                //resto
                if(operacion==4 && direccion==1){
                    if(inicial%matriz[i][j+1]==matriz[i][j+2]){
                     return 4;

                    }
                }
            }
        }
    }
}

int funcionPantalla5 (int inicial, int matriz[][6], int operacion, int direccion){



    for (int i=0; i<6; i++){
        for (int j=0; j<6 ;j++){
            if(matriz[3][0]==inicial){
                //suma
                if(operacion==1 && direccion==3){
                    if(inicial+matriz[i+1][j]==matriz[i+2][j]){
                     return 5;

                    }
                }






            }
        }
    }


}

int funcionPantalla6 (int inicial, int matriz[][6], int operacion, int direccion){



    for (int i=0; i<6; i++){
        for (int j=0; j<6 ;j++){
            if(matriz[3][3]==inicial){
                //suma
                if(operacion==1 && direccion==1){
                    if(inicial+matriz[i][j+1]==matriz[i][j+2]){
                     return 6;

                    }
                }
                //resta
                if(operacion==2 && direccion==1){
                    if(inicial-matriz[i][j+1]==matriz[i][j+2]){
                     return 6;

                    }
                }
                //Multiplicacion
                if(operacion==3 && direccion==1){
                    if(inicial*matriz[i][j+1]==matriz[i][j+2]){
                     return 6;

                    }
                }
                //division
                if(operacion==4 && direccion==1){
                    if(inicial/matriz[i][j+1]==matriz[i][j+2]){
                     return 6;

                    }
                }
                //resto
                if(operacion==4 && direccion==1){
                    if(inicial%matriz[i][j+1]==matriz[i][j+2]){
                     return 6;

                    }
                }
            }
        }
    }



}

int funcionPantalla7 (int inicial, int matriz[][6], int operacion, int direccion){


    for (int i=0; i<6; i++){
        for (int j=0; j<6 ;j++){
            if(matriz[1][0]==inicial){
                //suma
                if(operacion==1 && direccion==3){
                    if(inicial+matriz[i+1][j]==matriz[i+2][j]){
                     return 7;
                    }
                }
                //resta
                if(operacion==2 && direccion==3){
                    if(inicial-matriz[i+1][j]==matriz[i+2][j]){
                     return 7;
                    }
                }
                //Multiplicacion
                if(operacion==3 && direccion==3){
                    if(inicial*matriz[i+1][j]==matriz[i+2][j]){
                     return 7;
                    }
                }
                //division
                if(operacion==4 && direccion==3){
                    if(inicial/matriz[i+1][j]==matriz[i+2][j]){
                     return 7;
                    }
                }
                //resto
                if(operacion==4 && direccion==3){
                    if(inicial%matriz[i+1][j]==matriz[i+2][j]){
                     return 7;
                    }
                }

            }

        }
    }

}

