#include <iostream>
#include "accumulator.h"

#define SUM_MACRO(a, b) ((a) + (b))

int main() {

    std::cout << "Тестирование функции со статической переменной" << std::endl;
    MathUtils::accumulateAndPrint(5);
    MathUtils::accumulateAndPrint(10);
    MathUtils::accumulateAndPrint(3);

    std::cout << "\nТестирование макроса" << std::endl;
    int x = 7, y = 8;
    std::cout << "Результат макроса: " << SUM_MACRO(x, y) << std::endl;

    return 0;
}