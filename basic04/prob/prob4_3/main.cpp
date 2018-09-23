#include <iostream>

using namespace std;

int main(void) {
    int *num = new int[4];
    int i;

    for(i = 0; i < 4; i++) {
        num[i] = (i * 2);
    }

    for(i = 0; i < 4; i++) {
        cout << "num[" << i << "] = " << num[i] << ", ";
    }
    delete []num;
    cout << endl;

    return 0;
}
