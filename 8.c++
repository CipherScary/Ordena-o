#include <iostream>
#include <vector>
#include <string>

void modifiedSelectionSort(std::vector<std::string>& results) {
    int n = results.size();

    for (int i = 0; i < n / 2; ++i) {
        int minIndex = i;
        int maxIndex = i;

        for (int j = i + 1; j < n - i; ++j) {
            if (results[j] < results[minIndex]) {
                minIndex = j;
            }
            if (results[j] > results[maxIndex]) {
                maxIndex = j;
            }
        }

        if (minIndex != i) {
            std::swap(results[i], results[minIndex]);
        }

        // Se o máximo estava na posição 'i', após a troca, seu índice mudou
        if (maxIndex == i) {
            maxIndex = minIndex;
        }

        if (maxIndex != n - i - 1) {
            std::swap(results[n - i - 1], results[maxIndex]);
        }

        // Mostra o array após cada troca
        std::cout << "Após iteração " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            std::cout << results[k] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::string> results = {"Pass", "Fail", "Pass", "Pass", "Fail"};

    std::cout << "Resultados originais: ";
    for (const std::string& result : results) {
        std::cout << result << " ";
    }
    std::cout << std::endl;

    modifiedSelectionSort(results);

    std::cout << "Resultados ordenados: ";
    for (const std::string& result : results) {
        std::cout << result << " ";
    }
    std::cout << std::endl;

    return 0;
}
