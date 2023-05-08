#include<iostream>
using namespace std;

// variables globales para almacenar el número de preguntas y el número de autos
int q, n;

// arreglo para almacenar la cantidad de gasolina deseada por cada auto
long long int carro[100002];

// función para realizar la búsqueda binaria
void busquedaBinaria(long long int &g){
    // inicialización de variables para la búsqueda binaria
    int ini=0, fin=n, m;
    
    // mientras que no se haya encontrado el número máximo de autos que pueden ser llenados con la cantidad limitada de gasolina G
    while(ini!=fin){
        // se encuentra el punto medio
        m=(ini+fin)/2+1;
        
        // si la cantidad de gasolina deseada por el auto en la posición m es menor o igual a la cantidad limitada de gasolina G
        // entonces se actualiza la posición inicial
        if(carro[m]<=g) ini=m;
        
        // de lo contrario, se actualiza la posición final
        else fin=m-1;
    }
    
    // se imprime la cantidad máxima de autos que pueden ser llenados con la cantidad limitada de gasolina G y la cantidad de gasolina sobrante después de haber llenado esos autos
    cout<<ini<<" "<<g-carro[ini]<<'\n';
}

int main(){
    // se desactiva la sincronización de los flujos de entrada y salida para mejorar la velocidad
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    // se lee el número de preguntas y el número de autos
    cin>>q>>n;
    
    // se lee la cantidad de gasolina deseada por cada auto y se va sumando para obtener la cantidad total de gasolina necesaria para llenar todos los autos
    for(int i=1;i<=n;i++){
        cin>>carro[i];
        carro[i]+=carro[i-1];
    }
    
    // para cada pregunta, se lee la cantidad limitada de gasolina G y se realiza la búsqueda binaria para encontrar la cantidad máxima de autos que pueden ser llenados con esa cantidad de gasolina y la cantidad de gasolina sobrante
    for(int i=1;i<=q;i++){
        long long int g;
        cin>>g;
        busquedaBinaria(g);
    }
    
    // se termina el programa
    return 0;
}
