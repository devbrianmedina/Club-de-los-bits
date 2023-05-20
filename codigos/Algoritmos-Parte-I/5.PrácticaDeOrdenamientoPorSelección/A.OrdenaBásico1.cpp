#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  int array[n];
  for(int i = 0; i < n; i++){
    cin >> array[i];
  }
  sort(array, array + n);
  for(int i = 0; i < n; i++){
    cout << array[i] << "\n";
  }
  return 0;
}
