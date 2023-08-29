#include <iostream>
#include <string>

struct TemperatureReading {
    double temperature;
    TemperatureReading* next;

    TemperatureReading(double temp) : temperature(temp), next(nullptr) {}
};

class TemperatureList {
public:
    TemperatureList() : head(nullptr) {}

    void insert(double temp) {
        TemperatureReading* newReading = new TemperatureReading(temp);

        if (!head || temp < head->temperature) {
            newReading->next = head;
            head = newReading;
        } else {
            TemperatureReading* current = head;
            while (current->next && temp >= current->next->temperature) {
                current = current->next;
            }
            newReading->next = current->next;
            current->next = newReading;
        }
    }

    void display() {
        TemperatureReading* current = head;
        while (current) {
            std::cout << current->temperature << "°C ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    TemperatureReading* head;
};

int main() {
    TemperatureList tempList;
    tempList.insert(28.5);
    tempList.insert(23.8);
    tempList.insert(32.1);
    tempList.insert(26.7);
    tempList.insert(29.3);

    std::cout << "Leituras de temperatura originais: ";
    tempList.display();

    std::cout << "Leituras de temperatura ordenadas: ";
    tempList.display();

    return 0;
}
