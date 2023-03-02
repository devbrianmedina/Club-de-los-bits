#include <iostream>
using namespace std;

int main() {
    int i = 1;
    // El bucle do-while se ejecutará al menos una vez antes de verificar la condición
    do {
        // Se imprime el valor actual de i en la consola
        cout << i << endl;
        // Se incrementa i en 1 en cada iteración
        i++;
    } while (i <= 10); // Se verifica que i sea menor o igual a 10 al final de cada iteración

    // Se devuelve 0 para indicar que el programa ha finalizado correctamente
    return 0;
}
