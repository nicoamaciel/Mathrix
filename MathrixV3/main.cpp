
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "rlutil.h"
using namespace std;
using namespace rlutil;
#include "funciones.h"


int main()
{
    srand(time(NULL));
    setColor(BLACK);
    setBackgroundColor(GREY);
    cls();
    //ARMADO MATRIZ
    const int FILA=6;
    const int COLUMNA=6;

    //JUEGO
    int fin;
    int puntos=0;
    int pilas=3;
    int opcion;
    int operacion=0;
    int direccion=0;
    bool ronda = true;

    //PANTALLAS
    int pantalla=0;
    int pantalla3=0;
    int pantalla4=0;
    int pantalla5=0;
    int pantalla6=0;
    int pantalla7=0;

    //VALIDACION_XPANTALLA
    bool validacion1=false;


    //NOMBRE Y CALCULADORA
    char nombre[15];
    char calculadora[15];



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
                cls();
                cout << "Ingrese su nombre: " << endl;
                cin >> nombre;
                cout << "Ingrese su calculadora favorita: " << endl;
                cin >> calculadora;


                while (pilas>0)
                {


                    cls ();


                    cout << "Pilas: " << pilas << endl << endl;
                    cout << "Puntos: " << puntos << endl << endl;
                    cout << "--------------------" << endl;

                    if (ronda==true){
                    mostrarMatriz(matriz,FILA,COLUMNA);
                    }




                    if (pantalla==1){
                    mostrarMatriz1(matriz,FILA,COLUMNA);
                    validacion1=true;

                    }
                    else
                    {
                        if(validacion1==true && pantalla==2){
                        mostrarMatriz2(matriz,FILA,COLUMNA);

                        }
                    }

                    if(pantalla3==3){
                     mostrarMatriz3(matriz,FILA,COLUMNA);

                    }

                    if(pantalla4==4){
                     mostrarMatriz4(matriz,FILA,COLUMNA);

                    }

                    if(pantalla5==5){
                     mostrarMatriz5(matriz,FILA,COLUMNA);

                    }

                    if(pantalla6==6){
                     mostrarMatriz6(matriz,FILA,COLUMNA);
                    }

                    if(pantalla7==7){
                     mostrarMatriz7(matriz,FILA,COLUMNA);
                    }










                    cout << "-----------------------" << endl;

                    cout << "Ingrese cordenada para fila [0 - 1 - 2 - 3 - 4 - 5] " << endl;
                    cin >> datoFila;
                    cout << "Ingrese cordenada para columna [0 - 1 - 2 - 3 - 4 - 5] " << endl;
                    cin >> datoColum;

                    valorInicial = busquedaInicial (datoFila, datoColum, matriz);
                    ////////////////////////////////////////////////////////////////////////////
                    cout << "Elija operacion: ";
                    cout <<" 1) Suma - 2) Resta - 3) Multiplicacion - 4)Division - 5) Resto: " << endl;
                    cin >> operacion;
                    cout << "Ingrese direccion de operacion: ";
                    cout << "1) Derecha - 2) Izquierda - 3) Abajo - 4)Arriba: " << endl;
                    cin >> direccion;


                    /*pantalla = validacion;*/

                    ronda = false;

                    pantalla = funcionPantalla (valorInicial, matriz, operacion, direccion);
                    pantalla3 = funcionPantalla3 (valorInicial, matriz, operacion, direccion);
                    pantalla4 = funcionPantalla4 (valorInicial, matriz, operacion, direccion);
                    pantalla5 = funcionPantalla5 (valorInicial, matriz, operacion, direccion);
                    pantalla6 = funcionPantalla6 (valorInicial, matriz, operacion, direccion);
                    pantalla7 = funcionPantalla7 (valorInicial, matriz, operacion, direccion);
                }

        break;
        case 2:
            cout << "Estadisticas: " << endl;
        break;
        case 3:
            cout << "Creditos: " << endl;
                cout << "Nicolas Maciel - Legajo" <<endl;
                cout << "Juan" << endl;
                cout << "Luka" << endl;
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


