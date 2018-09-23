#include <iostream>
#include "car.h"

using namespace std;

int main(void) {
    CCar* pC = 0;
    pC = new CCar(); // newの後にはコンストラクタ名が来ます.コンストラクタを呼び出し、インスタンスを生成します.
    pC->supply(20);
    pC->move();
    pC->move();
    pC->move();
    delete pC; // インスタンス消去
    cout << "インスタンスの消去終了です" << endl;
    return 0;
}
