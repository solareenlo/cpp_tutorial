#include <iostream>

using namespace std;

void ref(int&);

int main(void) {
    int a = 7;
    int &n = a;
    cout << "a = " << a << endl;
    //ref(n);
    n += 3;
    cout << "n = " << n << endl;
    cout << "a = " << a << endl;
    return 0;
}

void ref(int& n) {
    n += 3;
}
