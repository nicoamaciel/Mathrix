#include <iostream>
#include <ctime>
#include <cstdlib>
#include "rlutil.h"
using namespace std;
using namespace rlutil;
#include "funciones.h"

setBackgroundColor(GREY);
int main()
{
    srand(time(NULL));
    setBackgroundColor(GREY);
    setColor(BLACK);

    //ARMADO MATRIZ
    const int FILA=6;
    const int COLUMNA=6;

    //JUEGO
    int fin;
    int pilas=3;
    int opcion;
    int operacion;
    int direccion;
    int pantalla=0;



    //BUSQUEDA DE VALOR INICIAL
    int datoFila, datoColum;
    int valorInicial=0;


    int matriz[FILA][COLUMNA]={};
    ///Carga de tablero
    for (int i=0; i<6 ; i++){
        for (int j=0; j<6; j++){
            matriz[i][j]+=rand()%9;
        }
    }


    do{
        cout << "           MATHRIX" << endl;
        cout << "-----------------------" << endl;
        cout << "1 - JUGAR" << endl;
        cout << "2 - ESTADISTICAS " << endl;
        cout << "3 - CREDITOS " << endl;
        cout << "4 - INSTRUCCIONES " << endl;
        cout << "-----------------------" << endl;
        cout << "0 - SALIR" << endl;
        cout << "-----------------------" << endl;
        cout << endl << "INGRESE OPCION: ";
        cin >> opcion;

        switch(opcion){
        case 1:
                while (pilas>0)
                {
                    cout << "--------------------" << endl;
                    if(pantalla==0){
                    cls();

                    cout << "Pilas: " << pilas << endl << endl;

                    mostrarMatriz(matriz,FILA,COLUMNA);
                    }
                    if (pantalla==1){
                    cls();
                    mostrarMatriz2(matriz,FILA,COLUMNA);
                    }


                    cout << "-----------------------" << endl;

                    cout << "Ingrese cordenada para fila [0 - 1 - 2 - 3 - 4 - 5] " << endl;
                    cin >> datoFila;
                    cout << "Ingrese cordenada para columna [0 - 1 - 2 - 3 - 4 - 5] " << endl;
                    cin >> datoColum;

                    valorInicial = busquedaInicial (datoFila, datoColum, matriz);
                    ////////////////////////////////////////////////////////////////////////////
                    cout << "Elija operacion 1) Suma - 2) Resta - 3) Multiplicacion - 4)Division - 5) Resto: " << endl;
                    cin >> operacion;
                    cout << "Ingrese direccion de operacion";
                    cout << "1) Derecha - 2) Izquierda - 3) Abajo - 4)Arriba: " << endl;
                    cin >> direccion;

                    pantalla++;

                }

        break;
        case 2:
            cout << "Estadisticas: " << endl;
        break;
        case 3:
            cout << "Creditos: " << endl;
        break;
        case 4:
            cout << "Instrucciones:  " << endl;
        break;
        case 0:
            cout << "Realmente desea salir?" << endl;
            cout << "------S/N-----------" << endl;
        break;

        }



    }while(fin<0);





    return 0;
}


