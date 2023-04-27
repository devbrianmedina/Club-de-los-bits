#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, p; // n es el número de cubículos y p es el número de programadores
vector<int> cubiculos; // vector que almacena la posición de cada cubículo

bool esPosible(int distancia_minima) {
    int ultimo_asignado = cubiculos[0]; // posición del último cubículo asignado
    int programadores_asignados = 1; // número de programadores ya asignados
    for (int i = 1; i < n; i++) { // iteramos desde el segundo cubículo
        if (cubiculos[i] - ultimo_asignado >= distancia_minima) {
            // si la distancia entre este cubículo y el último asignado es mayor o igual a la distancia mínima
            ultimo_asignado = cubiculos[i]; // asignamos este cubículo como último asignado
            programadores_asignados++; // incrementamos el número de programadores asignados
            if (programadores_asignados == p) { // si ya hemos asignado todos los programadores
                return true; // es posible asignarlos con la distancia mínima actual
            }
        }
    }
    return false; // si llegamos hasta aquí, no es posible asignar los programadores con la distancia mínima actual
}

int main() {
    cin >> n >> p; // leemos n y p
    cubiculos.resize(n); // redimensionamos el vector de cubículos para que tenga tamaño n
    for (int i = 0; i < n; i++) {
        cin >> cubiculos[i]; // leemos la posición del cubículo i
    }
    sort(cubiculos.begin(), cubiculos.end()); // ordenamos el vector de cubículos de menor a mayor

    int inicio = 0, fin = cubiculos[n - 1], distancia_minima = 0; // inicializamos los límites de la búsqueda binaria
    while (inicio <= fin) { // mientras no hayamos explorado todo el rango posible
        int mid = (inicio + fin) / 2; // calculamos la distancia mínima a explorar
        if (esPosible(mid)) { // si es posible asignar los programadores con esta distancia mínima
            distancia_minima = mid; // actualizamos la distancia mínima
            inicio = mid + 1; // exploramos distancias mayores
        } else {
            fin = mid - 1; // exploramos distancias menores
        }
    }

    cout << distancia_minima << endl; // imprimimos la distancia mínima encontrada

    return 0;
}
