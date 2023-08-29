#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos arr[j] e arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
        // Mostra o array após a i-ésima iteração
        std::cout << "Apos a iteração " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            std::cout << arr[k] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[] = {23, 15, 7, 42, 11, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Array original: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    bubbleSort(arr, n);
    
    std::cout << "Array ordenado: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
