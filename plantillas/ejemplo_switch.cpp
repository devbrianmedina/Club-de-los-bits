#include <iostream>
using namespace std;

int main() {
    int opcion;
    //cout << "Ingrese una opción del 1 al 3: ";
    cin >> opcion;

    //NOTA: Recuerda que no puedes utilizar textos (ejemplo con caracteres: https://github.com/devbrianmedina/Club-de-los-bits/blob/main/plantillas/ejemplo_switch_caracteres.cpp)
    switch (opcion) {
        case 1:
            cout << "Seleccionaste la opción 1" << endl;
            break;
        case 2:
            cout << "Seleccionaste la opción 2" << endl;
            break;
        case 3:
            cout << "Seleccionaste la opción 3" << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
            break;
    }

    // Se devuelve 0 para indicar que el programa ha finalizado correctamente
    return 0;
}
