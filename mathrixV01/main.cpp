#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

#include "cargar_matriz.h"

/**PROYECTO DE SEGUNDO PARCIAL JUEGO MATHRIX 08/06
*/

int main()
{
    srand(time(NULL));
    const int VERTICAL=6;
    const int HORIZONTAL=6;

    int matriz[VERTICAL][HORIZONTAL];

    int opcion;
    do{
        cout << "MATHRIX" << endl;
        cout << "-----------------------" << endl;
        cout << "1 - JUGAR" << endl;
        cout << "2 - ESTADISTICAS " << endl;
        cout << "3 - CREDITOS " << endl;

        cout << "-----------------------" << endl;
        cout << "0 - SALIR" << endl;
        cout << "-----------------------" << endl;
        cout << endl << "INGRESE OPCION: ";
        cin >> opcion;

        switch (opcion){
        case 1:
            cout << "-----------------------" << endl;
            cargar_tablero(matriz, VERTICAL, HORIZONTAL);
            mostrar_tablero(matriz, VERTICAL, HORIZONTAL);

        break;
        case 2:
        cout << "Estadisticas: ";
        break;
        case 3:
        cout << "Creditos: ";
        break;
        }
    break;
    }while(opcion!=0);
 /**-------------------------------------------------------------*/
    return 0;
}
