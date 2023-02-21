## Estructuras de control de flujo

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
  std::cout << contador << std::endl;
  contador++;
}
```

En este caso, se imprimirán los números del 0 al 9 en la consola, ya que el bloque de código dentro del while se ejecutará mientras la variable "contador" sea menor que 10. La variable "contador" se incrementa en 1 en cada iteración del bucle, de modo que en algún momento dejará de cumplirse la condición del while y se saldrá del bucle.
