#include <iostream>
using namespace std;

int q, n;
long long int carro[100002];
void busquedaBinaria(long long int &g){
    int inicio = 0;
    int fin = n;
    int medio;
    while(inicio!=fin){
        //punto medio
        medio = (inicio+fin)/2+1;
//si la cantidad de gasolina deseada por
//el auto en la posicion medio es menor o
//o igual a la cantidad limitada de gas G
//entonces actualizamos la pocicion inicial
        if(carro[medio] <= g){
            inicio = medio;
        } else {
            fin = medio-1;
        }
    }
    cout << inicio << " " << g-carro[inicio] << endl;
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    cin >> q >> n;
    //se lee la cantidad de gasolina deseada
    //por cada auto y se va sumando para
    //obtener la cantidad total de gasolina
    //para llenar todos los autos
    for(int i = 1; i <= n; i++){
        cin >> carro[i];
        carro[i]+=carro[i-1];
    }
    //para cada pregunta se lee la cantidad
    //limitada de gasolina G y se realiza la
    //busqueda binaria para encontrar la cantidad
    //maxima de autos que se pueden llenar
    for(int i=1; i<=q;i++){
        long long int g;
        cin >> g;
        busquedaBinaria(g);
    }
    return 0;
}