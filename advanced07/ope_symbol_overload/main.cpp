#include <iostream>
#include "vector2.h"

using namespace std;

void vec(string, CVector2&);

int main(void) {
    CVector2 v1, v2, v3;
    v1.x = 1.0;
    v1.y = 2.0;
    v2 = v1;
    v3 = 3.0 * v1;
    vec("v1 = ", v1);
    vec("v2 = ", v2);
    vec("v3 = ", v3);
    v3 += v1;
    vec("v3 = ", v3);
    v1 -= v2;
    vec("v1 = ", v1);
    return 0;
}

void vec(string name, CVector2& v) {
    cout << name << "(" << v.x << ", " << v.y << ")" << endl;
}
