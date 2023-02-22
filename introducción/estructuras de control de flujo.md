## Estructuras de control de flujo

### Contenido
- [if](#estructura-if)
- [if else](#estructura-if-else)
- [switch](#estructura-switch)
- [while](#estructura-while)
- [do-while](#estructura-do-while)
- [for](#estructura-for)

### Estructura if
La estructura "if" permite realizar una acción si una condición es verdadera. La sintaxis es la siguiente:

```c++
if (condicion) {
  // código a ejecutar si la condición es verdadera
}
```

Por ejemplo:

```c++
int edad = 18;

if (edad >= 18) {
  cout << "Eres mayor de edad" << endl;
}
```

En este caso, si la variable "edad" es mayor o igual a 18, se imprimirá en la consola el mensaje "Eres mayor de edad".

### Estructura if-else
La estructura "if-else" permite ejecutar una acción si la condición es verdadera, y otra acción si la condición es falsa. La sintaxis es la siguiente:

```c++
if (condicion) {
  // código a ejecutar si la condición es verdadera
} else {
  // código a ejecutar si la condición es falsa
}
```

Por ejemplo:

```c++
int edad = 16;

if (edad >= 18) {
  cout << "Eres mayor de edad" << endl;
} else {
  cout << "Eres menor de edad" << endl;
}
```

En este caso, si la variable "edad" es mayor o igual a 18, se imprimirá en la consola el mensaje "Eres mayor de edad". Si la variable "edad" es menor de 18, se imprimirá en la consola el mensaje "Eres menor de edad".

### Estructura switch
La estructura "switch" permite evaluar una expresión y ejecutar una acción en función del valor de dicha expresión. La sintaxis es la siguiente:

```c++
switch (expresion) {
  case valor1:
    // código a ejecutar si la expresión tiene el valor valor1
    break;
  case valor2:
    // código a ejecutar si la expresión tiene el valor valor2
    break;
  default:
    // código a ejecutar si la expresión no coincide con ningún valor anterior
}
```

Por ejemplo:

```c++
int diaSemana = 3;

switch (diaSemana) {
  case 1:
    cout << "Lunes" << endl;
    break;
  case 2:
    cout << "Martes" << endl;
    break;
  case 3:
    cout << "Miércoles" << endl;
    break;
  case 4:
    cout << "Jueves" << endl;
    break;
  case 5:
    cout << "Viernes" << endl;
    break;
  case 6:
    cout << "Sábado" << endl;
    break;
  case 7:
    cout << "Domingo" << endl;
    break;
  default:
    cout << "Valor inválido" << endl;
}
```

En este caso, si la variable "diaSemana" tiene el valor 3, se imprimirá en la consola el mensaje "Miércoles".

### Estructura while
La estructura "while" permite ejecutar un bloque de código mientras una condición sea verdadera. La sintaxis es la siguiente:

```c++
while (condicion) {
  // código a ejecutar mientras la condición sea verdadera
}
```

Por ejemplo:

```c++
int contador = 0;

while (contador < 10) {
  cout << contador << endl;
  contador++;
}
```

En este caso, se imprimirán los números del 0 al 9 en la consola, ya que el bloque de código dentro del while se ejecutará mientras la variable "contador" sea menor que 10. La variable "contador" se incrementa en 1 en cada iteración del bucle, de modo que en algún momento dejará de cumplirse la condición del while y se saldrá del bucle.

### Estructura do-while
El bucle "do-while" es una variante del bucle "while" en la que el bloque de código se ejecuta al menos una vez, independientemente de si la condición es verdadera o falsa. La sintaxis general del bucle "do-while" es la siguiente:

```c++
do {
  // código a ejecutar
} while (condición);
```

- El bloque de código dentro del "do" se ejecuta una vez.
- La condición se evalúa después de cada iteración. Si la condición es verdadera, se vuelve a ejecutar el bloque de código. Si la condición es falsa, se sale del bucle.

Por ejemplo, el siguiente código solicitará al usuario que ingrese un número entero positivo, y seguirá pidiendo un número hasta que el usuario ingrese un número válido:

```c++
int numero;

do {
  cout << "Ingresa un número entero positivo: ";
  cin >> numero;
} while (numero <= 0);
```

En este caso, el bloque de código dentro del "do" se ejecuta al menos una vez, y solicita al usuario un número entero positivo. La condición se evalúa después de cada iteración, y si el usuario ingresa un número válido, se sale del bucle.

Otro ejemplo podría ser el siguiente código que imprime los números del 0 al 9:

```c++
int i = 0;

do {
  cout << i << endl;
  i++;
} while (i < 10);
```

En este caso, el bloque de código dentro del "do" se ejecuta al menos una vez, y luego se ejecuta repetidamente mientras "i" sea menor que 10. En cada iteración se imprime el valor de "i" y se incrementa en 1.

Es importante tener en cuenta que la estructura "do-while" se utiliza cuando se necesita que el bloque de código se ejecute al menos una vez, aunque la condición sea falsa.

### Estructura for
La estructura "for" permite ejecutar un bloque de código un número determinado de veces. Se utiliza principalmente cuando se conoce de antemano el número de iteraciones que se van a realizar. La sintaxis general del bucle "for" es la siguiente:

```c++
for (inicialización; condición; actualización) {
  // código a ejecutar en cada iteración
}
```

- La inicialización se utiliza para establecer el valor inicial de una variable de control.
- La condición es una expresión booleana que se evalúa antes de cada iteración. Si la condición es verdadera, se ejecuta el bloque de código dentro del "for". Si la condición es falsa, se sale del bucle.
- La actualización se utiliza para modificar la variable de control después de cada iteración.

Por ejemplo, el siguiente código imprimirá los números del 0 al 9:

```c++
for (int i = 0; i < 10; i++) {
  cout << i << endl;
}
```

En este caso, la variable "i" se inicializa en 0, la condición es que "i" sea menor que 10, y la actualización incrementa "i" en 1 en cada iteración.

Otro ejemplo podría ser recorrer un arreglo:

```c++
int numeros[] = {1, 2, 3, 4, 5};

for (int i = 0; i < 5; i++) {
  cout << numeros[i] << endl;
}
```

En este caso, la variable "i" se utiliza como índice para acceder a los elementos del arreglo "numeros". La condición es que "i" sea menor que la longitud del arreglo (en este caso, 5), y la actualización incrementa "i" en 1 en cada iteración.

Es importante destacar que la estructura "for" también puede utilizarse para iterar sobre otros tipos de estructuras de datos, como listas o mapas, o para realizar otras acciones en cada iteración, como realizar operaciones matemáticas o de lógica.
