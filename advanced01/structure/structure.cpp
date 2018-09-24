#include <iostream>

using namespace std;

struct data {
    int n;
    double d;
};

int main(void) {
    data dt;
    dt.n = 100;
    dt.d = 123.456;
    cout << "dt.n = " << dt.n << endl << "dt.d = " << dt.d << endl;
    return 0;
}
