#include "accumulator.h"
#include <iostream>

using std::cout;
using std::endl;

namespace MathUtils {
    void accumulateAndPrint(int value) {
        static int staticVar = 0;

        cout << "Переданное: " << value
            << ", Прошлое статическое: " << staticVar
            << ", Сумма = " << (value + staticVar) << endl;

        staticVar = value;
    }
}