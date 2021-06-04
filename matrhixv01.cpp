

#include <iostream>
using namespace std;

#include <clocale>
int main(void){
    setlocale(LC_ALL, "Spanish");

//Ingreso
    float metros, cent, kilo, pulg, pies;
    int opcion;
    do{
        cout << "MATHRIX" << endl;
        cout << "-----------------------" << endl;
        cout << "1 - JUGAR" << endl;
        cout << "2 - ESTADISTICAS " << endl;
        cout << "3 - CREDITOS " << endl;

        cout << "-----------------------" << endl;
        cout << "0 - SALIR" << endl;
        cin >> opcion;
        /*
        switch (opcion){
        case 1:
        cout << "Ingrese medida en metros: " << endl;
        cin >> metros;
        break;
        case 2:
        cout << "Medida en centimetros: " << metros*100 <<endl;
        break;
        case 3:
        cout << "Medida en kilomentros: " << metros/1000 <<endl;
        break;
        case 4:
        cout << "Medida en pulgadas: " << metros*39.701 <<endl;
        break;
        case 5:
        cout << "Medida a pies: " << metros*3.28084 <<endl;
        break;

        }*/

    }while(opcion!=0);


return 0;
}
