#include <iostream>
#include <algorithm>
using namespace std;

int n, p; // número de cubículos y programadores, respectivamente
int cub[100005]; // arreglo de posiciones de los cubículos

// Función que verifica si se puede asignar los programadores de tal manera que la
// distancia mínima entre cualesquiera dos de los programadores sea tan grande como sea posible
bool sePuede(int dist) {
    int prog = 1; // número de programadores asignados
    int last = cub[0]; // última posición asignada
    for (int i = 1; i < n; i++) {
        if (cub[i] - last >= dist) { // si la distancia entre la posición actual y la última es mayor o igual a la distancia dada
            prog++; // asignar el siguiente programador
            last = cub[i]; // actualizar la última posición asignada
            if (prog == p) return true; // si ya se asignaron todos los programadores, entonces se puede asignar con la distancia dada
        }
    }
    return false; // si no se pudieron asignar todos los programadores con la distancia dada, entonces no se puede asignar
}

int main() {
    cin >> n >> p; // leer el número de cubículos y programadores
    for (int i = 0; i < n; i++) {
        cin >> cub[i]; // leer las posiciones de los cubículos
    }
    sort(cub, cub+n); // ordenar las posiciones de los cubículos
    int l = 1, r = cub[n-1] - cub[0]; // establecer los límites inferior y superior de la distancia mínima
    int ans = 1; // respuesta inicial
    while (l <= r) {
        int mid = (l+r)/2; // distancia media
        if (sePuede(mid)) { // si se puede asignar con la distancia media
            ans = mid; // actualizar la respuesta
            l = mid+1; // incrementar la distancia mínima
        } else {
            r = mid-1; // decrementar la distancia mínima
        }
    }
    cout << ans << endl; // imprimir la respuesta
    return 0;
}
