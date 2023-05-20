#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

typedef unsigned long long int ulli;

struct colection {
    ulli element;
    int count;
    int first_release;
};

bool ordenar(const colection& first_node, const colection& second_node) {
    if (first_node.count == second_node.count) {
        return first_node.first_release < second_node.first_release;
    }
    return first_node.count > second_node.count;
}

int main() {
    int n, maximoNumero;
    std::cin >> n >> maximoNumero;
    ulli aux;
    std::map<ulli, colection> numeros;
    for (int i = 0; i < n; i++) {
        std::cin >> aux;
        auto it = numeros.find(aux);
        if (it != numeros.end()) {
            it->second.count++;
        } else {
            numeros.insert({ aux, { aux, 1, i + 1 } });
        }
    }
    std::vector<colection> contados;
    for (auto it = numeros.begin(); it != numeros.end(); it++) {
        contados.push_back(it->second);
    }
    std::sort(contados.begin(), contados.end(), ordenar);
    for (const auto& col : contados) {
        for (int j = 0; j < col.count; j++) {
            std::cout << col.element << " ";
        }
    }
    return 0;
}
