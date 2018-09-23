#include <iostream>

using namespace std;

int main(void) {
    int *p = 0;
    p = new int(); // int型の領域を動的に確保
    *p = 123456;
    cout << *p << endl;
    delete p; // 動的に確保した領域を解放
    return 0;
}
