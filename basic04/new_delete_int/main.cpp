#include <iostream>

using namespace std;

int main(void) {
    int *p = 0;
    p = new int();
    *p = 123456;
    cout << *p << endl;
    delete p;
    return 0;
}
