#include <iostream>
#include <vector>
#include <string>

// Função para imprimir um vetor de datas
void printDates(const std::vector<std::string>& dates) {
    for (const std::string& date : dates) {
        std::cout << date << " ";
    }
    std::cout << std::endl;
}

void optimizedBubbleSort(std::vector<std::string>& dates) {
    int n = dates.size();
    bool swapped; // Flag para verificar se houve alguma troca

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (dates[j] > dates[j + 1]) {
                // Troca os elementos dates[j] e dates[j + 1]
                std::swap(dates[j], dates[j + 1]);
                swapped = true;
            }
        }

        // Se nenhuma troca foi feita, o vetor está ordenado
        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::vector<std::string> dates = {"2023-09-10", "2023-08-15", "2023-08-25", "2023-09-30", "2023-08-05"};

    std::cout << "Datas originais: ";
    printDates(dates);

    optimizedBubbleSort(dates);

    std::cout << "Datas ordenadas: ";
    printDates(dates);

    return 0;
}
