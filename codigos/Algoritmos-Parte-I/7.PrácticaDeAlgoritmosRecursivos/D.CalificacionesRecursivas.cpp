#include <iostream>
#include <string>
#include <stack>

int calcularCalificacion(const std::string& cadena) {
    std::stack<int> calificaciones;  // Stack para almacenar las calificaciones

    for (char c : cadena) {
        if (c == '(') {
            calificaciones.push(-1);  // Utilizamos -1 para representar los paréntesis de apertura
        } else if (c == ')') {
            int suma = 0;
            int count = 0;

            // Calcular el promedio de las calificaciones dentro del grupo
            while (calificaciones.top() != -1) {
                suma += calificaciones.top();
                calificaciones.pop();
                count++;
            }

            calificaciones.pop();  // Eliminar el paréntesis de apertura

            int promedio = suma / count;
            calificaciones.push(promedio);  // Agregar el promedio al stack
        } else {
            // Convertir el carácter a un entero y agregarlo al stack
            int calificacion = c - '0';
            calificaciones.push(calificacion);
        }
    }

    // Al final, el stack debe contener solo la calificación final
    return calificaciones.top();
}

int main() {
    std::string cadena;
    std::cin >> cadena;

    int calificacionFinal = calcularCalificacion(cadena);

    std::cout << calificacionFinal << std::endl;

    return 0;
}
