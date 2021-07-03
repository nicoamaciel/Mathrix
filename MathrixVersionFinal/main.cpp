
#include <iostream>

#include "rlutil.h"
using namespace std;
using namespace rlutil;
#include "funciones.h"


int main()
{

    setColor(BLACK);
    setBackgroundColor(GREY);
    cls();

    /**JUEGO*/

    int const FILA=6;
    int const COLUMNA=6;
    int mathrix[FILA][COLUMNA]={};

    char nombre[10];
    char calculadora[10];
    int ronda=0;
    int opcion, fin, fila,columna, inicial;
    int calculo, direccion;
    int error=0;
    int pilas=3;





    llenarMatriz (mathrix,FILA,COLUMNA);

    /**ESTADISTICAS*/
    int puntos1=0;
    char nombre1[10]="Sindatos";
    int puntos2=0;
    char nombre2[10]="Sindatos";
    int puntos3=0;
    char nombre3[10]="Sindatos";
    int puntos=0;

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
        if(opcion==1){
            puntos=0;
            error=0;
            ronda++;
        }


        switch(opcion){
        case 1:

            cls();

            cout << "Ingrese su nombre: ";
            cin >> nombre;
            cout << "Ingrese calculadora favorita: ";
            cin >> calculadora;




            while(pilas>0){

                int resultado=0;
                int puntosjuego=0;





                cls();


                cout << "Ronda: " << ronda << endl;
                cout << "-----------------" << endl;
                ////////////////////////////////////////////////////////////////////////////////
                resultado = operacion (mathrix,fila,columna,calculo,direccion);
                puntos += puntaje (mathrix, direccion, resultado, fila, columna);
                juegoMatriz(mathrix,fila,columna,resultado,direccion);
                ////////////////////////////////////////////////////////////////////////////////

                mostrarMatriz (mathrix,FILA,COLUMNA,fila,columna);
                cout << "-----------------" << endl;


                if(resultado==15 || resultado==11){
                    pilas--;
                }

                cout << "pilas :" << pilas << endl;

                /*if(resultado==11){
                    error+=1;
                }*/



               /* if(error==0){
                    cout << "Pilas 3" << endl;

                }
                else{
                    if(error==1){
                        cout << "Error de ingreso! Pierde una pila :(" << endl;
                        cout << "Pilas 2" << endl;
                        pilas--;
                    }
                    else{
                        if(error==2){
                        cout << "Error de ingreso! Pierde una pila :(" << endl;
                        cout << "Pilas 1" << endl;
                        pilas--;
                        }

                        else{
                            if(error==3){
                            cout << "Error de ingreso! Pierde una pila :(" << endl;
                            cout << "Pilas 0" << endl;
                            pilas--;
                            }

                        }
                    }
                }*/



                cout << "Puntos: " << puntos << endl;
                cout << "-----------------------" << endl;




                cout << "Ingrese coordenadas para fila: ";
                cin >> fila;
                cout << "Ingrese coordenadas para columna: ";
                cin >> columna;
                cout << "Ingrese operacion:" << endl;
                cout << " 1)  Suma - 2) Resta - 3) Multiplicacion - 4) Division - 5) Modulo:";
                cin >> calculo;
                cout << "Ingrese direccion:" << endl;
                cout << " 4) Izquierda   - 8) Arriba  - 2) Abajo  - 6) Derecha:";
                cin >> direccion;

            }

        break;
        case 2:
            cout << "Estadisticas: " << endl;
            cout << "-----------------" << endl;


            if(puntos>puntos1){
                puntos1=puntos;
                for(int i=0; i<10 ; i++){
                nombre1[i]=nombre[i];
                }
            }
            cout << "-------------------------------------------" << endl;
            cout << "Primer puesto: " << nombre1 << " Puntos: " << puntos1 << endl;
            cout << "-------------------------------------------" << endl;
        break;
        case 3:
            cout << "Creditos: " << endl;
                cout << "Nicolas Maciel - 24290" <<endl;
                cout << "Juan Cruz Paganini - 24241 " << endl;
        break;
        case 4:
            cls();
            cout << "Instrucciones:  " << endl;
            cout << "-----------------" << endl;
            cout << "Para comenzar a jugar debe ingresar su nombre y su modelo de calculadora favorito" << endl;
            cout << "Siguiente debemos seleccionar primero la coordenada de la fila y la columna, en la interseccion de se validara la seleccion" << endl;
            cout << "Las cordenadas se tomaran desde 0-1-2-3-4-5 de manera vertical para fila y columna va de manera horizontal 0-1-2-3-4-5  " << endl;
            cout << "Por ejemplo, queremos tomar el valor del extremo izquiero superior se pasara por cordenadas 0 para fila y 0 para columna" << endl;
            cout << "Siguiente, seleccionamos la operacion 1-suma 2-resta 3-multiplicacion 4-division 5-modulo" << endl;
            cout << "Siguiente e ultimo ingreso de esta ronda es la direccion 4-izquierda 6-derecha 2-abajo 8-arriba " << endl;
            cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Ejemplo de jugabalidada: " << endl;
            cout << "Si el valor selecionado es 1 de la fila 0 y columna 0 mientras a su derecha se encuentra 2 y luego un 3" << endl;
            cout << "Si la operacion es suma y la direccion es derecha se sumaran los puntos obtenidos en este caso 6"<< endl;


        break;
        case 0:
            cout << "Realmente desea salir?" << endl;

        break;



        }

        cout << "-----------------------" << endl;
        cout << endl << endl << endl;
        cout << "GAME OVER" << endl;
        cout << "-----------------------" << endl;
        cout << "1 - VOLVER AL MENU PRINCIPAL" << endl;
        cout << "-----------------------" << endl;
        cout << "0 - SALIR" << endl;
        cout << "-----------------------" << endl;
        cout << endl << "INGRESE OPCION: ";
        cin >> opcion;
        cls();

        if(opcion==1){
        pilas=3;
        reiniciarMatriz (mathrix,FILA,COLUMNA);
        llenarMatriz (mathrix,FILA,COLUMNA);
    }


    }while(opcion!=0);





    return 0;
}


