#include <iostream>
#include "newcalc.h"

using namespace std;

int main(void) {
    NewCalc n;
    n.setNum1(20);
    n.setNum2(3);
    cout << n.getNum1() << " + " << n.getNum2() << " = " << n.add() << endl;
    cout << n.getNum1() << " - " << n.getNum2() << " = " << n.sub() << endl;
    cout << n.getNum1() << " * " << n.getNum2() << " = " << n.mul() << endl;
    cout << n.getNum1() << " / " << n.getNum2() << " = " << n.div() << endl;
    return 0;
}
