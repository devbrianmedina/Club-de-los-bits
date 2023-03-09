#include <iostream>
using namespace std;

int main() {
    int t, b;
    cin >> t >> b; // Lee la cantidad de tamales robados y el número de miembros de la banda.
    int tl = (t + 1) / 2; // Calcula la mitad de los tamales y, si es impar, agrega el tamal sobrante al líder.
    tl += (t - tl) % (b - 1); // Reparte equitativamente los tamales restantes entre los miembros de la banda, dejando los sobrantes para el líder.
    cout << tl; // Imprime el número de tamales que se comerá el líder de la banda.
    return 0;
}
