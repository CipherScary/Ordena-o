#include <iostream>
#include <vector>
#include <string>

void insertionSort(std::vector<std::string>& codes) {
    int n = codes.size();

    for (int i = 1; i < n; ++i) {
        std::string key = codes[i];
        int j = i - 1;

        // Move os elementos maiores que a chave para a frente
        while (j >= 0 && codes[j] > key) {
            codes[j + 1] = codes[j];
            j--;
        }
        codes[j + 1] = key;
    }
}

int main() {
    std::vector<std::string> codes = {"P123", "P354", "P011", "P789", "P234"};

    std::cout << "Códigos originais: ";
    for (const std::string& code : codes) {
        std::cout << code << " ";
    }
    std::cout << std::endl;

    insertionSort(codes);

    std::cout << "Códigos ordenados: ";
    for (const std::string& code : codes) {
        std::cout << code << " ";
    }
    std::cout << std::endl;

    return 0;
}
