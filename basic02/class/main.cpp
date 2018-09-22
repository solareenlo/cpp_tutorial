#include <iostream>
#include "sample.h"

using namespace std;

int main(void) {
    CSample obj; // CSampleを実体化
    int num;

    cout << "整数値を入力してください：";
    cin >> num;

    obj.set(num); // CSampleのメンバ変数m_numにnumを代入
    cout << obj.get() << endl; // Csampleのメンバ変数m_numの値をget

    return 0;
}
