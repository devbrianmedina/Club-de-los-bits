#include <iostream>
using namespace std;

int fibonacci(int n, int &calls) {
    calls++; // incrementa el contador de llamadas
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1, calls) + fibonacci(n-2, calls);
    }
}

int main() {
    int n;
    cin >> n;

    int calls = 0;
    int fib = fibonacci(n, calls);

    cout << fib << " " << calls << endl;
    return 0;
}
