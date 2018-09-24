#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

int main(void) {
    CCalc<int> i1;
    CCalc<string> i2;
    i1.set(2, 3);
    i2.set("ABC", "XYZ");
    cout << i1.add() << endl << i2.add() << endl;
    return 0;
}
