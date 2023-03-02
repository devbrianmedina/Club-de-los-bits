#include <iostream>
using namespace std;

int main() {
    double radius, area;
    //cout << "Ingresa el radio del círculo: ";
    cin >> radius;
    area = 3.14159 * radius * radius;
    cout << "El área del círculo es: " << area;
    return 0;
}
