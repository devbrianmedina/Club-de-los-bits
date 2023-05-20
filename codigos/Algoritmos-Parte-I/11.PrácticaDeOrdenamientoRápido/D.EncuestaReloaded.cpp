#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int cases;
double weight, height;

int main() {
    optimizar_io
    
    cin >> cases;
    
    vector<pair<double, pair<string, string>>> lol(cases);
    
    for (int i = 0; i < cases; ++i) {
        cin >> lol[i].second.second;
        cin.ignore();
        getline(cin, lol[i].second.first);
        cin >> weight >> height;
        lol[i].first = (weight / (height * height));
    }
    
    sort(lol.begin(), lol.end());
    
    for (int i = cases - 1; i >= 0; --i)
        cout << lol[i].second.second << " " << lol[i].second.first << " " << fixed << setprecision(1) << lol[i].first << "\n";
}
