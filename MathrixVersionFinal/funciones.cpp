#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#include "funciones.h"


void llenarMatriz (int mathrix[][6], int a, int b){
    srand(time(NULL));

    for (int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            mathrix[i][j]+=rand()%10;
        }
    }

}

int operacion (int mathrix[][6],int fila, int columna, int operacion, int direccion){

int inicial, siguiente, fin;
int aux1 =-1;
int aux2 =-2;
int aux3 =-3;
int aux4 =-4;
int mal =11;
int error1=15;

switch (operacion){
case 1:

    if (direccion == 6){
         for (int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                if(i==fila && j==columna){
                inicial=mathrix[i][j];
                siguiente=mathrix[i][j+1];
                fin = inicial + siguiente;
                    if (mathrix[i][j+2]==fin){
                        return aux1;
                    }
                    else{
                        return mal;
                    }
                }
            }
        }

    }
    else{
        if (direccion == 4){
            for (int i=0; i<6; i++){
                for(int j=0; j<6; j++){
                    if(i==fila && j==columna){
                    inicial=mathrix[i][j];
                    siguiente=mathrix[i][j-1];
                    fin = inicial + siguiente;
                        if (mathrix[i][j-2]==fin){
                            return aux2;
                        }
                        else{
                            return mal;
                        }
                    }
                }
            }
        }
        else{
            if (direccion == 8){
                for (int i=0; i<6; i++){
                    for(int j=0; j<6; j++){
                        if(i==fila && j==columna){
                        inicial=mathrix[i][j];
                        siguiente=mathrix[i-1][j];
                        fin = inicial + siguiente;
                            if (mathrix[i-2][j]==fin){
                                return aux3;
                            }
                            else{
                                return mal;
                            }
                        }
                    }
                }
            }
            else{
                if(direccion == 2){
                    for(int i=0; i<6; i++){
                        for(int j=0; j<6; j++){
                            if(i==fila && j==columna){
                                inicial=mathrix[i][j];
                                siguiente=mathrix[i+1][j];
                                fin = inicial + siguiente;
                                if (mathrix[i+2][j]==fin){
                                    return aux4;
                                }
                                else{
                                    return mal;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
break;
case 2:
        if (direccion == 6){
         for (int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                if(i==fila && j==columna){
                inicial=mathrix[i][j];
                siguiente=mathrix[i][j+1];
                fin = inicial - siguiente;
                    if (mathrix[i][j+2]==fin){
                        return aux1;
                    }
                    else
                    {
                    return mal;
                    }

                }
            }
        }

    }
    else{
        if (direccion == 4){
            for (int i=0; i<6; i++){
                for(int j=0; j<6; j++){
                    if(i==fila && j==columna){
                    inicial=mathrix[i][j];
                    siguiente=mathrix[i][j-1];
                    fin = inicial - siguiente;
                        if (mathrix[i][j-2]==fin){
                            return aux2;
                        }
                        else
                        {
                        return mal;

                        }
                    }
                }
            }
        }
        else{
            if (direccion == 8){
                for (int i=0; i<6; i++){
                    for(int j=0; j<6; j++){
                        if(i==fila && j==columna){
                        inicial=mathrix[i][j];
                        siguiente=mathrix[i-1][j];
                        fin = inicial - siguiente;
                            if (mathrix[i-2][j]==fin){
                                return aux3;
                            }
                            else{
                            return mal;
                            }
                        }
                    }
                }
            }
            else{
                if(direccion == 2){
                    for(int i=0; i<6; i++){
                        for(int j=0; j<6; j++){
                            if(i==fila && j==columna){
                                inicial=mathrix[i][j];
                                siguiente = mathrix[i+1][j];
                                fin = inicial - siguiente;
                                if (mathrix[i+2][j]==fin){
                                    return aux4;
                                }
                                else{
                                return mal;

                                }
                            }
                        }
                    }
                }
            }
        }
    }
break;
case 3:

        if (direccion == 6){
         for (int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                if(i==fila && j==columna){
                inicial=mathrix[i][j];
                siguiente=mathrix[i][j+1];
                fin = inicial * siguiente;
                    if (mathrix[i][j+2]==fin){
                        return aux1;
                    }
                    else{
                        return mal;
                    }
                }
            }
        }

    }
    else{
        if (direccion == 4){
            for (int i=0; i<6; i++){
                for(int j=0; j<6; j++){
                    if(i==fila && j==columna){
                    inicial=mathrix[i][j];
                    siguiente=mathrix[i][j-1];
                    fin = inicial * siguiente;
                        if (mathrix[i][j-2]==fin){
                            return aux2;
                        }
                        else{
                            return mal;
                        }
                    }
                }
            }
        }
        else{
            if (direccion == 8){
                for (int i=0; i<6; i++){
                    for(int j=0; j<6; j++){
                        if(i==fila && j==columna){
                        inicial=mathrix[i][j];
                        siguiente=mathrix[i-1][j];
                        fin = inicial * siguiente;
                            if (mathrix[i-2][j]==fin){
                                return aux3;
                            }
                            else{
                                return mal;
                            }
                        }
                    }
                }
            }
            else{
                if(direccion == 2){
                    for(int i=0; i<6; i++){
                        for(int j=0; j<6; j++){
                            if(i==fila && j==columna){
                                inicial=mathrix[i][j];
                                siguiente=mathrix[i+1][j];
                                fin = inicial * siguiente;
                                if (mathrix[i+2][j]==fin){
                                    return aux4;
                                }
                                else{
                                    return mal;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
break;
case 4:

        if (direccion == 6){
         for (int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                if(i==fila && j==columna){
                inicial=mathrix[i][j];
                siguiente=mathrix[i][j+1];
                    if(siguiente==0){
                        return error1;
                    }
                fin = inicial / siguiente;
                    if (mathrix[i][j+2]==fin){
                        return aux1;
                    }
                    else{
                        return mal;
                    }
                }
            }
        }

    }
    else{
        if (direccion == 4 ){
            for (int i=0; i<6; i++){
                for(int j=0; j<6; j++){
                    if(i==fila && j==columna){
                    inicial=mathrix[i][j];
                    siguiente=mathrix[i][j-1];
                        if(siguiente==0){
                        return error1;
                        }
                    fin = inicial / siguiente;
                        if (mathrix[i][j-2]==fin){
                            return aux2;
                        }
                        else{
                            return mal;
                        }
                    }
                }
            }
        }
        else{
            if (direccion == 8){
                for (int i=0; i<6; i++){
                    for(int j=0; j<6; j++){
                        if(i==fila && j==columna){
                        inicial=mathrix[i][j];
                            if(siguiente==0){
                            return error1;
                            }
                        siguiente=mathrix[i-1][j];
                        if(siguiente==0){
                        return error1;
                        }

                        fin = inicial / siguiente;
                            if (mathrix[i-2][j]==fin){
                                return aux3;
                            }
                            else{
                                return mal;
                            }
                        }
                    }
                }
            }
            else{
                if(direccion == 2){
                    for(int i=0; i<6; i++){
                        for(int j=0; j<6; j++){
                            if(i==fila && j==columna){
                                inicial=mathrix[i][j];
                                siguiente=mathrix[i+1][j];
                                if(siguiente==0){
                                return error1;
                                }
                                fin = inicial / siguiente;
                                if (mathrix[i+2][j]==fin){
                                    return aux4;
                                }
                                else{
                                    return mal;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
break;
case 5:

        if (direccion == 6){
         for (int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                if(i==fila && j==columna){
                inicial=mathrix[i][j];
                siguiente=mathrix[i][j+1];
                fin = inicial % siguiente;
                    if (mathrix[i][j+2]==fin){
                        return aux1;
                    }
                    else{
                        return mal;
                    }
                }
            }
        }

    }
    else{
        if (direccion == 4){
            for (int i=0; i<6; i++){
                for(int j=0; j<6; j++){
                    if(i==fila && j==columna){
                    inicial=mathrix[i][j];
                    siguiente=mathrix[i][j-1];
                    fin = inicial % siguiente;
                        if (mathrix[i][j-2]==fin){
                            return aux2;
                        }
                        else{
                            return mal;
                        }
                    }
                }
            }
        }
        else{
            if (direccion == 8){
                for (int i=0; i<6; i++){
                    for(int j=0; j<6; j++){
                        if(i==fila && j==columna){
                        inicial=mathrix[i][j];
                        siguiente=mathrix[i-1][j];
                        fin = inicial % siguiente;
                            if (mathrix[i-2][j]==fin){
                                return aux3;
                            }
                            else{
                                return mal;
                            }
                        }
                    }
                }
            }
            else{
                if(direccion == 2){
                    for(int i=0; i<6; i++){
                        for(int j=0; j<6; j++){
                            if(i==fila && j==columna){
                                inicial=mathrix[i][j];
                                siguiente=mathrix[i+1][j];
                                fin = inicial % siguiente;
                                if (mathrix[i+2][j]==fin){
                                    return aux4;
                                }
                                else{
                                    return mal;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
break;




}
}//FinaldeFuncion


void juegoMatriz (int mathrix[][6],int fila,int columna, int operacion, int direccion){

if (operacion == -1 ){
    for (int i=0; i<6; i++){
            for(int j=0; j<6; j++){
               if(i==fila && j==columna){
                mathrix[i][j]=-1;
                mathrix[i][j+1]=-1;
                mathrix[i][j+2]=-1;
            }
        }
    }
}
else{
    if (operacion ==-2 ){
        for (int i=0; i<6; i++){
            for(int j=0; j<6; j++){
               if(i==fila && j==columna){
                mathrix[i][j]=-1;
                mathrix[i][j-1]=-1;
                mathrix[i][j-2]=-1;
                }
            }
        }
    }
    else{
        if (operacion == -3 ){
            for (int i=0; i<6; i++){
                for(int j=0; j<6; j++){
                    if(i==fila && j==columna){
                    mathrix[i][j]=-1;
                    mathrix[i-1][j]=-1;
                    mathrix[i-2][j]=-1;
                }
            }
        }
    }
    else{
        if (operacion ==-4){
            for (int i=0; i<6; i++){
                for(int j=0; j<6; j++){
                        if(i==fila && j==columna){
                        mathrix[i][j]=-1;
                        mathrix[i+1][j]=-1;
                        mathrix[i+2][j]=-1;
                        }
                    }
                }
            }
        }

    }
}






}//FinaldeFuncion


void mostrarMatriz (int mathrix[][6], int a, int b, int fila, int columna){


    for (int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(mathrix[i][j]==-1){
            cout << " X";
            }
            else{
            cout << " " << mathrix[i][j];
            }

        }
        cout << endl << endl;
    }



}


int puntaje (int mathrix[][6], int direccion, int resultado, int fila, int columna){

int puntos=0;

if(direccion==4 && resultado==-2){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(i==fila && j==columna){
                puntos += mathrix[i][j];
                puntos += mathrix[i][j-1];
                puntos += mathrix[i][j-2];
            }

        }

    }
}
if(direccion==6 && resultado==-1){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(i==fila && j==columna){
                puntos += mathrix[i][j];
                puntos += mathrix[i][j+1];
                puntos += mathrix[i][j+2];
            }

        }

    }
}
if(direccion==8 && resultado==-3){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(i==fila && j==columna){
                puntos += mathrix[i][j];
                puntos += mathrix[i-1][j];
                puntos += mathrix[i-2][j];
            }

        }

    }
}
if(direccion==2 && resultado==-4){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(i==fila && j==columna){
                puntos += mathrix[i][j];
                puntos += mathrix[i+1][j];
                puntos += mathrix[i+2][j];
            }

        }

    }
}











return puntos;



}


void reiniciarMatriz (int mathrix[][6],int a,int b){

    for (int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            mathrix[i][j]=0;
        }
    }


}




