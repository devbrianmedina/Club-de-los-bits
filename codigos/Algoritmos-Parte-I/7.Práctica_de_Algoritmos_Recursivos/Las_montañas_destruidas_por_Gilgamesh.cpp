#include <iostream>
#include <algorithm> // Librería para utilizar la función sort()
#include <string> // Librería para trabajar con strings

using namespace std;

void ordenar(int numeros[], string nombres[], int n)
{
    // Algoritmo de ordenamiento por inserción
    for (int i = 1; i < n; i++)
    {
        int indice = i;
        // Intercambia los valores hacia la izquierda hasta que se ordene el número
        while (indice > 0 && numeros[indice - 1] < numeros[indice])
        {
            int temp = numeros[indice - 1];
            numeros[indice - 1] = numeros[indice];
            numeros[indice] = temp;
            string temp_string = nombres[indice - 1];
            nombres[indice - 1] = nombres[indice];
            nombres[indice] = temp_string;

            indice--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int numeros[n];
    string nombres[n];

    // Lee la altura y el nombre de cada montaña
    for (int i = 0; i < n; i++)
    {
        cin >> numeros[i] >> nombres[i];
    }

    // Ordena las montañas por altura de forma descendente
    ordenar(numeros, nombres, n);

    // Imprime el nombre de cada montaña en orden de destrucción
    for (int i = 0; i < n; i++)
    {
        cout << nombres[i] << endl;
    }

    return 0;
}
