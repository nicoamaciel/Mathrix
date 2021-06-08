#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>



///DECLARAR MATRIZ = CARGAR VECTOR
void cargar_matriz (int[][6], int, int);
void mostrar_matriz (int[][6], int, int);





int main (){
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
            cargar_matriz(matriz, VERTICAL, HORIZONTAL);
            mostrar_matriz(matriz, VERTICAL, HORIZONTAL);

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

return 0;
}


///DEFINIR MATRIZ

//Carga con cero
void cargar_matriz (int mat[][6], int num1, int num2){
int i, j;

for(i=0; i<num1; i++){
    for(j=0; j<num2; j++){
        mat[i][j]= rand () % 9;
    }
}

}


void mostrar_matriz (int mat[][6], int num1, int num2){

int i, j;

for(i=0; i<num1; i++){
    for(j=0; j<num2; j++){
        cout << mat[i][j];
    }
    cout << endl;
}

}
