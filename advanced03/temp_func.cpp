#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main(void) {
    cout << add<int>(5, 1) << endl;
    cout << add<string>("ABC", "XYZ") << endl;
    cout << add(3, 4) << endl;
    cout << add(1.2, 3.4) << endl;
    return 0;
}
