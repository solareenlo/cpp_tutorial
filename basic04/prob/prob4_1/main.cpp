#include <iostream>
#include "number.h"

using namespace std;

int main(void) {
    Number* pN;
    pN = new Number();
    pN->setNumbers(10, 20);
    cout << pN->getNum1() << " + " << pN->getNum2() << " = ";
    cout << pN->getAdd() << endl;
    delete pN;

    return 0;
}
