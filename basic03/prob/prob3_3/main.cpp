#include <iostream>
#include "calculation.h"

using namespace std;

int main(void) {
    Calculation c;
    c.setNumber1(8);
    c.setNumber2(10);
    cout << c.getNumber1() << " + " << c.getNumber2() << " = " << c.add() << endl;
    cout << c.getNumber1() << " - " << c.getNumber2() << " = " << c.sub() << endl;
    return 0;
}
