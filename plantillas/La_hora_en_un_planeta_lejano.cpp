#include <iostream>
using namespace std;

int main() {
    int s, d, hr, min, seg;  // Declaración de variables
    cin >> s;  // Entrada del valor de los segundos
    seg = s % 50;  // Cálculo de los segundos restantes después de calcular los minutos
    s /= 50;  // Actualización de la variable s para calcular los minutos
    min = s % 70;  // Cálculo de los minutos restantes después de calcular las horas
    s /= 70;  // Actualización de la variable s para calcular las horas
    hr = s % 12;  // Cálculo de las horas restantes después de calcular los días
    s /= 12;  // Actualización de la variable s para calcular los días
    d = s;  // Almacenamiento del número de días en la variable d
    cout << d << " " << hr << " " << min << " " << seg;  // Salida de los valores de días, horas, minutos y segundos
    return 0;  // Indicador de que el programa se ha ejecutado correctamente
}
