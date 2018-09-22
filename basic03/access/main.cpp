#include "sample.h"
#include <iostream>

using namespace std;

int main (void) {
    Sample s;
    s.a = 1;
    // s.b = 2; // s.bはアクセス指定子がprivateなのでエラーになる
    s.func1();
    // s.func2(); // s.func2()もアクセス指定子がprivateなのでエラーになる
    return 0;
}
