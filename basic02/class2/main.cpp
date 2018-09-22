#include <iostream>
#include "sample.h"

using namespace std;

int main(void) {
    CSample obj1, obj2, obj3; // CSampleを実体化

    obj1.set(1);
    obj2.set(2);
    obj3.set(3);

    cout << obj1.get() << endl;
    cout << obj2.get() << endl;
    cout << obj3.get() << endl;

    return 0;
}
