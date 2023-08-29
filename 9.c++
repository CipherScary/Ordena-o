#include <iostream>
#include <vector>

void selectionSortMatrix(std::vector<std::vector<double>>& defectRates) {
    int rows = defectRates.size();
    int cols = defectRates[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols - 1; ++j) {
            int minIndex = j;
            for (int k = j + 1; k < cols; ++k) {
                if (defectRates[i][k] < defectRates[i][minIndex]) {
                    minIndex = k;
                }
            }
            if (minIndex != j) {
                std::swap(defectRates[i][j], defectRates[i][minIndex]);
            }
        }

        // Mostra a matriz após cada iteração
        std::cout << "Após iteração " << i + 1 << ":\n";
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                std::cout << defectRates[r][c] << " ";
            }
            std::cout << "\n";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<double>> defectRates = {
        {0.02, 0.08, 0.04},
        {0.05, 0.12, 0.09},
        {0.03, 0.06, 0.07}
    };

    std::cout << "Matriz de taxas de defeito original:\n";
    for (const auto& row : defectRates) {
        for (double rate : row) {
            std::cout << rate << " ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;

    selectionSortMatrix(defectRates);

    std::cout << "Matriz de taxas de defeito ordenada:\n";
    for (const auto& row : defectRates) {
        for (double rate : row) {
            std::cout << rate << " ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;

    return 0;
}
