#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float num1, num2, suma, resta, multiplicacion, division;
  
    //ENTRADA DE DATOS
    cin >> num1 >> num2;
  
    /* #RECUERDA QUE NO ES NECESARIO ENVIAR MENSAJES AL USUARIO EN ENVIOS PARA OMEGAUP.COM#
    // Pedir al usuario que ingrese dos números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    */

    // Realizar las operaciones básicas
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    // Mostrar los resultados de las operaciones
    cout << "La suma de " << num1 << " y " << num2 << " es " << suma << endl;
    cout << "La resta de " << num1 << " y " << num2 << " es " << resta << endl;
    cout << "El producto de " << num1 << " y " << num2 << " es " << multiplicacion << endl;
    cout << "La división de " << num1 << " entre " << num2 << " es " << division << endl;

    return 0;
}
