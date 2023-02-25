## Clases y objetos
En C++, las clases son una forma de encapsular datos y funciones relacionados en una sola unidad. Las clases permiten definir tipos de datos personalizados con propiedades y comportamientos específicos.

Para definir una clase en C++, se utiliza la siguiente sintaxis:
```c++
class NombreDeLaClase {
  public:
    // Métodos y atributos públicos
  private:
    // Métodos y atributos privados
};
```

Donde:
- **NombreDeLaClase**: es el nombre que se le da a la clase.
- **public**: es el nivel de acceso a los métodos y atributos que se definen dentro de esta sección. Los miembros públicos de la clase son accesibles desde cualquier parte del programa.
- **private**: es el nivel de acceso a los métodos y atributos que se definen dentro de esta sección. Los miembros privados de la clase sólo son accesibles desde los métodos de la clase.

Dentro de una clase se pueden definir métodos y atributos que se utilizan para definir el comportamiento y las propiedades de los objetos que se crean a partir de la clase.

Para crear un objeto de una clase, se utiliza la siguiente sintaxis:
```c++
NombreDeLaClase nombreDelObjeto;
```

Donde:
- **NombreDeLaClase**: es el nombre de la clase a partir de la cual se va a crear el objeto.
- **nombreDelObjeto**: es el nombre que se le da al objeto.

Una vez que se ha creado un objeto de una clase, se pueden llamar a sus métodos y acceder a sus atributos utilizando el operador de acceso .. Por ejemplo:
```c++
miObjeto.metodoPublico(); // Llama a un método público de la clase
int valor = miObjeto.atributoPrivado; // Accede a un atributo privado de la clase
```
La creación de clases y objetos es una de las características más poderosas de C++. Permite definir tipos de datos personalizados y definir comportamientos específicos para cada uno de ellos. Esto se utiliza frecuentemente para modelar objetos del mundo real en programas de computadora, lo que hace que el código sea más fácil de entender y mantener.

### Sintaxis básica de una clase
La sintaxis básica de una clase en C++ incluye la definición de atributos y métodos. Aquí está un ejemplo simple:
```c++
class MiClase {
  private:
    int atributoPrivado; // Atributo privado
  public:
    void metodoPublico(); // Método público
    int obtenerAtributo(); // Método público
    void establecerAtributo(int valor); // Método público
};
```

En este ejemplo, la clase se llama **MiClase**. Incluye un atributo privado **atributoPrivado** y tres métodos públicos: **metodoPublico**, **obtenerAtributo** y **establecerAtributo**.

Los atributos de una clase son variables que almacenan datos para cada objeto creado a partir de la clase. En este ejemplo, el atributo **atributoPrivado** es de tipo **int** y es privado, lo que significa que sólo puede ser accedido dentro de la clase.

Los métodos de una clase son funciones que realizan operaciones en los datos almacenados en los atributos de la clase. En este ejemplo, el método **metodoPublico** es público y no toma argumentos ni devuelve valores. El método **obtenerAtributo** es público y devuelve el valor del atributo **atributoPrivado**. El método **establecerAtributo** es público y toma un argumento de tipo **int** que establece el valor del atributo **atributoPrivado**.

Dentro de la definición de la clase, los atributos y métodos pueden ser públicos o privados. Los atributos privados sólo pueden ser accedidos por métodos de la misma clase, mientras que los atributos públicos pueden ser accedidos por cualquier código que tenga acceso al objeto. Los métodos privados sólo pueden ser llamados por otros métodos dentro de la misma clase, mientras que los métodos públicos pueden ser llamados desde cualquier parte del programa.
