#include <iostream>
#include <vector>
#include <string>

void insertionSort(std::vector<std::string>& serialNumbers) {
    int n = serialNumbers.size();

    for (int i = 1; i < n; ++i) {
        std::string key = serialNumbers[i];
        int j = i - 1;

        // Move os elementos maiores que a chave para a frente
        while (j >= 0 && serialNumbers[j] > key) {
            serialNumbers[j + 1] = serialNumbers[j];
            j--;
        }
        serialNumbers[j + 1] = key;

        // Mostra o array após cada inserção
        std::cout << "Após inserção " << i << ": ";
        for (int k = 0; k <= i; ++k) {
            std::cout << serialNumbers[k] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::string> serialNumbers = {"SN456", "SN123", "SN789", "SN234", "SN567"};

    std::cout << "Números de série originais: ";
    for (const std::string& serialNumber : serialNumbers) {
        std::cout << serialNumber << " ";
    }
    std::cout << std::endl;

    insertionSort(serialNumbers);

    std::cout << "Números de série ordenados: ";
    for (const std::string& serialNumber : serialNumbers) {
        std::cout << serialNumber << " ";
    }
    std::cout << std::endl;

    return 0;
}
