#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int N; cin>>N;
  vector <int> edades;
  for (int i = 0; i < N; i ++){
    int n; cin>>n;
    edades.push_back(n);
  }

  sort(edades.begin(), edades.end());

  for (int i = 0; i < N; i ++) cout<<edades[i]<<" ";

  return 0;
}
