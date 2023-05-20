#include <iostream>
#include <algorithm>
#include <climits>

const int MAX_N = 100002;

int n, k;
long long int poste[MAX_N];

void lectura() {
    std::cin >> k >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> poste[i];
    }
    std::sort(poste + 1, poste + n + 1);
}

long long int calculo() {
    int ini = 1;
    int fin = k;
    long long int dis;
    long long int menor = LLONG_MAX; // Utilizamos LLONG_MAX en lugar de INT_MAX para evitar desbordamientos
    while (fin <= n) {
        dis = poste[fin] - poste[ini];
        ini++;
        fin++;
        if (dis < menor) {
            menor = dis;
        }
    }
    return menor;
}

int main() {
    lectura();
    std::cout << calculo() << '\n';
    return 0;
}
