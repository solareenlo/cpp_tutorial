#include <iostream>
#include "sample.h"

using namespace std;

int main(void) {
    CSample s;
    s.setNum(10);
    cout << s.getNum() << endl;
    return 0;
}
