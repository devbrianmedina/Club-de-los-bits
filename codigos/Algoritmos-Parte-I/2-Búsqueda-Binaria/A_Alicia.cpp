#include <iostream>
using namespace std;

// La función busquedaBinaria recibe un arreglo de enteros 'chapas', su tamaño 'size'
// y una llave de búsqueda 'llave'. Devuelve el número de la puerta que puede ser abierta con esa llave en el arreglo,
// o -1 si la llave no se encuentra en el arreglo.
int busquedaBinaria(int chapas[], int size, int llave){
    int inicio = 0;
    int fin = size;
    int medio;

    // Se divide el arreglo en mitades hasta que se encuentra la llave o se recorre
    // todo el arreglo sin encontrar la llave.
    while(inicio <= fin){
        medio = (inicio + fin) / 2;

        if(llave == chapas[medio]){  // Si la llave se encuentra en la posición 'medio'
            return medio;            // se devuelve la posición.
        }

        // Si la llave es menor que el valor en la posición 'medio', se descarta
        // la mitad derecha del arreglo.
        if(llave < chapas[medio]){
            fin = medio - 1;
        } else {  // Si la llave es mayor que el valor en la posición 'medio', se
                  // descarta la mitad izquierda del arreglo.
            inicio = medio + 1;
        }
    }

    // Si se recorrió todo el arreglo sin encontrar la llave, se devuelve -1.
    return -1;
}

// La función principal del programa.
int main(){
    int M, N;
    cin >> M;            // Se lee el tamaño del arreglo de chapas.
    int chapas[M];
    for(int i = 0; i < M; i++){
        cin >> chapas[i];  // Se leen los valores del arreglo de chapas.
    }
    cin >> N;            // Se lee el número de llaves de búsqueda.
    int llaves[N];
    for(int i = 0; i < N; i++){
        cin >> llaves[i];  // Se leen las llaves de búsqueda.
    }

    // Para cada llave de búsqueda, se llama a la función busquedaBinaria y se
    // imprime el número de la puerta que puede ser abierta con esa llave en el arreglo de chapas.
    for(int i = 0; i < N; i++){
        int pos = busquedaBinaria(chapas, M - 1, llaves[i]);  // Se llama a la función busquedaBinaria.
        if(pos == -1){  // Si la llave no se encuentra en el arreglo, se imprime 0.
            cout << 0 << " ";
        } else {  // Si la llave se encuentra en el arreglo, se imprime su posición más 1.
            cout << pos + 1 << " ";
          /*
           cuando se encuentra una llave de búsqueda en el arreglo de chapas, se imprime la posición de la llave en el arreglo sumándole 1.
           Esto se debe a que en la mayoría de los lenguajes de programación, los índices de los arreglos comienzan desde cero, es decir, 
           el primer elemento del arreglo tiene un índice de 0.
           En el contexto del problema, se pide imprimir la posición de la llave en el arreglo de chapas comenzando desde 1, 
           por lo que se le suma 1 al índice que se obtiene de la función busquedaBinaria() para imprimir la posición de la llave en el formato solicitado.
          */
        }
    }

    return 0;
}
