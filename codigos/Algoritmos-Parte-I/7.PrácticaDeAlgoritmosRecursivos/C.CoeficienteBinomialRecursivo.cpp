#include <iostream>

int binomialCoefficient(int N, int K, int& callCount) {
    callCount++;  // Incrementar el contador de llamadas a función

    // Caso base: binomialCoefficient(n, 0) y binomialCoefficient(n, n) siempre son 1
    if (K == 0 || K == N) {
        return 1;
    }

    // Llamada recursiva para calcular los coeficientes binomiales
    return binomialCoefficient(N - 1, K - 1, callCount) + binomialCoefficient(N - 1, K, callCount);
}

int main() {
    int N, K;
    std::cin >> N;
    std::cin >> K;

    int callCount = 0;
    int coefficient = binomialCoefficient(N, K, callCount);

    std::cout << coefficient << " " << callCount;

    return 0;
}
