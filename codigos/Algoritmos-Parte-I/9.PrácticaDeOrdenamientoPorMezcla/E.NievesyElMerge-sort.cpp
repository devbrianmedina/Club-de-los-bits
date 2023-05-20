#include <iostream>
#include <queue>
#include <stack>

using namespace std;

const int MAXN = 65538;
long long int dato[MAXN];

queue<long long int> izquierda(long long int ini, long long int fin);
stack<long long int> derecha(long long int ini, long long int fin);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    queue<long long int> ordenado;
    cin >> n;

    for (long long int i = 1; i <= n; i++) {
        cin >> dato[i];
    }

    ordenado = izquierda(1, n);

    while (!ordenado.empty()) {
        cout << ordenado.front() << " ";
        ordenado.pop();
    }

    return 0;
}

queue<long long int> izquierda(long long int ini, long long int fin) {
    if (ini == fin) {
        queue<long long int> regresa;
        regresa.push(dato[ini]);
        return regresa;
    }

    queue<long long int> IZQ;
    stack<long long int> DER;

    IZQ = izquierda(ini, (ini + fin) / 2);
    DER = derecha(((ini + fin) / 2) + 1, fin);

    queue<long long int> ret;

    while (!IZQ.empty() || !DER.empty()) {
        if (IZQ.empty()) {
            while (!DER.empty()) {
                ret.push(DER.top());
                DER.pop();
            }
        } else if (DER.empty()) {
            while (!IZQ.empty()) {
                ret.push(IZQ.front());
                IZQ.pop();
            }
        } else {
            if (IZQ.front() <= DER.top()) {
                ret.push(IZQ.front());
                IZQ.pop();
            } else {
                ret.push(DER.top());
                DER.pop();
            }
        }
    }

    return ret;
}

stack<long long int> derecha(long long int ini, long long int fin) {
    if (ini == fin) {
        stack<long long int> regresa;
        regresa.push(dato[ini]);
        return regresa;
    }

    queue<long long int> IZQ;
    stack<long long int> DER;

    IZQ = izquierda(ini, (ini + fin) / 2);
    DER = derecha(((ini + fin) / 2) + 1, fin);

    stack<long long int> ret;

    while (!IZQ.empty() || !DER.empty()) {
        if (IZQ.empty()) {
            while (!DER.empty()) {
                ret.push(DER.top());
                DER.pop();
            }
        } else if (DER.empty()) {
            while (!IZQ.empty()) {
                ret.push(IZQ.front());
                IZQ.pop();
            }
        } else {
            if (IZQ.front() <= DER.top()) {
                ret.push(IZQ.front());
                IZQ.pop();
            } else {
                ret.push(DER.top());
                DER.pop();
            }
        }
    }

    return ret;
}
