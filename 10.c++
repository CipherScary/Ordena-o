#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& energyReadings) {
    int n = energyReadings.size();

    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (energyReadings[j] > energyReadings[j + 1]) {
                std::swap(energyReadings[j], energyReadings[j + 1]);
                swapped = true;
            }
        }

        // Se nenhuma troca foi feita na iteração, o array já está ordenado
        if (!swapped) {
            break;
        }

        // Mostra o array após cada iteração
        std::cout << "Após iteração " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            std::cout << energyReadings[k] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<int> energyReadings = {230, 180, 150, 300, 210};

    std::cout << "Leituras de consumo de energia originais: ";
    for (int reading : energyReadings) {
        std::cout << reading << " ";
    }
    std::cout << std::endl;

    bubbleSort(energyReadings);

    std::cout << "Leituras de consumo de energia ordenadas: ";
    for (int reading : energyReadings) {
        std::cout << reading << " ";
    }
    std::cout << std::endl;

    return 0;
}
