## Funciones
Las funciones son bloques de código que se pueden llamar desde cualquier parte del programa en C++. Las funciones tienen un nombre, una lista de argumentos, un tipo de valor de retorno (si se desea) y un cuerpo que contiene las instrucciones que se ejecutan cuando se llama a la función.

Para definir una función en C++, se utiliza la siguiente sintaxis:
```c++
tipo_de_retorno nombre_de_la_funcion(argumentos) {
    // Cuerpo de la función
    // Instrucciones a ejecutar cuando se llama a la función
    return valor_de_retorno; // (si se desea)
}
```

Donde:
- **tipo_de_retorno**: es el tipo de dato que la función devuelve. Si la función no devuelve nada, se utiliza el tipo de dato void.
- **nombre_de_la_funcion**: es el nombre que se le da a la función. Es importante elegir un nombre descriptivo para la función.
- **argumentos**: es una lista separada por comas de los argumentos que la función toma como entrada. Los argumentos son variables que se utilizan dentro de la función y que son pasados a la función al llamarla.
- **cuerpo de la función**: es el bloque de código que se ejecuta cuando se llama a la función.
- **return valor_de_retorno**: es una declaración opcional que se utiliza para devolver un valor de la función. Si la función no devuelve nada, no se necesita esta declaración.

Para llamar a una función en C++, se utiliza el nombre de la función seguido de paréntesis que contienen los argumentos que se desean pasar a la función. Por ejemplo:

```c++
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 3;
    int resultado = sumar(x, y); // Llamada a la función "sumar"
    cout << resultado << endl; // Imprime "8"
    return 0;
}
```

En este ejemplo, se define una función llamada **sumar** que toma dos argumentos **a** y **b** y devuelve la suma de los dos. En la función **main**, se llama a la función **sumar** y se le pasan los valores **x** e **y**. La función devuelve el **resultado**, que se almacena en la variable resultado y se imprime en la pantalla.

Las funciones son una herramienta poderosa en C++ que permiten modularizar el código, hacerlo más fácil de entender y mantener, y mejorar su reutilización. Es importante aprender a definir y llamar funciones en C++ para escribir programas más efectivos y eficientes.
