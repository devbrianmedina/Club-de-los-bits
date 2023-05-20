#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(const string& palabra, int inicio, int fin) {
    if (inicio >= fin) {
        return true; // la palabra tiene longitud 0 o 1
    }
    if (palabra[inicio] != palabra[fin]) {
        return false; // los extremos no son iguales
    }
    return esPalindromo(palabra, inicio+1, fin-1); // compara la siguiente letra de ambos extremos
}

int main() {
    string palabra;
    cin >> palabra;
    if (esPalindromo(palabra, 0, palabra.length()-1)) {
        cout << "Si" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
