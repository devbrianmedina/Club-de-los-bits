#include <iostream>
using namespace std;

int main() {
    // Se define un arreglo de enteros con tamaño 5
    int numeros[5];

    // Se recorre el arreglo y se asigna un valor a cada posición
    for (int i = 0; i < 5; i++) {
        //cout << "Ingrese un número para la posición " << i << ": ";
        cin >> numeros[i];
    }

    // Se recorre el arreglo y se imprime cada valor
    for (int i = 0; i < 5; i++) {
        cout << "El número en la posición " << i << " es " << numeros[i] << endl;
    }

    // Se devuelve 0 para indicar que el programa ha finalizado correctamente
    return 0;
}
