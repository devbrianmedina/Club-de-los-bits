#include <iostream>
using namespace std;

int main() {
    int t, b;
    cin >> t >> b; // Lee la cantidad de tamales robados y el número de miembros de la banda.
    /*
    La expresión (t + 1) / 2 se utiliza para calcular la mitad de la cantidad de tamales robados (t). La razón por la que se suma 1 al número de tamales antes de dividirlo por 2 es para garantizar que, si la cantidad de tamales es impar, se redondee hacia arriba para que el líder reciba un tamal adicional.
    Por ejemplo, si se robaron 7 tamales, la mitad sería 3.5, pero como no se puede repartir medio tamal, se redondea hacia arriba a 4, y el líder recibe 4 tamales. En cambio, si se hubiera utilizado simplemente la expresión t / 2, se habría obtenido un resultado incorrecto de 3 tamales para el líder.
    Es importante notar que la expresión (t + 1) / 2 solo redondea hacia arriba si t es impar. Si t es par, simplemente divide t entre 2 y obtiene la mitad sin redondeo adicional.
    */
    int tl = (t + 1) / 2; // Calcula la mitad de los tamales y, si es impar, agrega el tamal sobrante al líder.
    tl += (t - tl) % (b - 1); // Reparte equitativamente los tamales restantes entre los miembros de la banda, dejando los sobrantes para el líder.
    cout << tl; // Imprime el número de tamales que se comerá el líder de la banda.
    return 0;
}
