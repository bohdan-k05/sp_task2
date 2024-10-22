#include <iostream>
#include <cstdio>
#include "calculator.h"

using namespace std;

int main() {
    Calculator calc;
    cout << "2 + 3 = " << calc.Add(2, 3) << "\n";
    cout << "Press any key to continue...\n";
    std::getchar();
    return 0;
}
