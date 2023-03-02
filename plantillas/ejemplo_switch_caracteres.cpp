#include <iostream>
using namespace std;

int main() {
    char letra;
    //cout << "Ingrese una letra entre A y C: ";
    cin >> letra;
  
    /* Tambien puedes seleccionar un caracter de una cadena de texto 
    string texto = "Hola Mundo";
    switch(texto[1])
    */
    switch (letra) {
        case 'A':
            cout << "Seleccionaste la letra A" << endl;
            break;
        case 'B':
            cout << "Seleccionaste la letra B" << endl;
            break;
        case 'C':
            cout << "Seleccionaste la letra C" << endl;
            break;
        default:
            cout << "Letra inválida" << endl;
            break;
    }

    // Se devuelve 0 para indicar que el programa ha finalizado correctamente
    return 0;
}
