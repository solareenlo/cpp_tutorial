#include <iostream>
#include "calc.h"

using namespace std;

int main(void) {
    CCalc *pC1, *pC2;
    pC1 = new CCalc();
    pC2 = new CCalc(1, 3);
    cout << 4 << " + " << 6 << " = " << pC1->add(4, 6) << endl;
    cout << pC2->getA() << " + " << pC2->getB() << " = " << pC2->add() << endl;
    delete pC1;
    delete pC2;
    return 0;
}
