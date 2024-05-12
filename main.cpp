#include "string.h"
#include "complex_number.h"
#include <iostream>

int main() {
    const int ARRAY_SIZE = 6;
    String* array[ARRAY_SIZE];
    
    std::cout << "Меню:\n";
    std::cout << "1. Создайте строку\n";
    std::cout << "2. Создайте комплексное число\n";
    std::cout << "0. Выход\n";
    
    int choice;
    do {
        std::cout << "Введите свой выбор: ";
        std::cin >> choice;
        
        switch(choice) {
            case 1: {
                char input[100];
                std::cout << "Введите строку: ";
                std::cin >> input;
                array[0] = new String(input);
                break;
            }
            case 2: {
                char input[100];
                std::cout << "Введите комплексное число: ";
                std::cin >> input;
                array[1] = new ComplexNumber(input);
                break;
            }
            case 0:
                break;
            default:
                std::cout << "Неверный выбор\n";
        }
    } while (choice != 0);

    // Testing methods
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        if (array[i]) {
            std::cout << "Длина строки " << i << ": " << array[i]->getLength() << std::endl;
            array[i]->clear();
            delete array[i];
        }
    }

    return 0;
}
