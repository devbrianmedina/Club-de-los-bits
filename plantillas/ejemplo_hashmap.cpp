#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Se define un hashmap que asocia nombres de países con sus capitales
    unordered_map<string, string> capitales = {
        {"Francia", "París"},
        {"Italia", "Roma"},
        {"España", "Madrid"},
        {"Portugal", "Lisboa"},
        {"Alemania", "Berlín"}
    };

    // Se solicita al usuario el nombre de un país
    string pais;
    //cout << "Ingrese el nombre de un país: ";
    cin >> pais;

    // Se busca la capital correspondiente al país ingresado
    if (capitales.find(pais) != capitales.end()) {
        cout << "La capital de " << pais << " es " << capitales[pais] << endl;
    } else {
        cout << "No se encontró la capital de " << pais << endl;
    }

    // Se devuelve 0 para indicar que el programa ha finalizado correctamente
    return 0;
}
