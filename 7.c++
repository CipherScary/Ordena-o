#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& times) {
    int n = times.size();

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (times[j] < times[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            std::swap(times[i], times[minIndex]);
        }

        // Mostra o array após cada iteração de seleção
        std::cout << "Após iteração " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            std::cout << times[k] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<int> times = {120, 90, 150, 80, 110};

    std::cout << "Tempos originais: ";
    for (int time : times) {
        std::cout << time << " ";
    }
    std::cout << std::endl;

    selectionSort(times);

    std::cout << "Tempos ordenados: ";
    for (int time : times) {
        std::cout << time << " ";
    }
    std::cout << std::endl;

    return 0;
}
