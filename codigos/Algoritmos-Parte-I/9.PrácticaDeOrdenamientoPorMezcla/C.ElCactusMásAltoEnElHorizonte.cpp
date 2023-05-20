#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, n1, v;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    sort(array, array + n);
    cin >> n1;
    for(int i = 0; i < n1; i++){
        cin >> v;
        cout << array[n - v] << " ";
    }
    return 0;
}
