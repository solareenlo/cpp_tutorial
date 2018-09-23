#include "number.h"

Number::Number():a(0), b(0) { // コンストラクタ:aとbの初期化
}

Number::~Number() { // デストラクタ
}

void Number::setNumbers(int n1, int n2) {
    a = n1;
    b = n2;
}

int Number::getNum1() {
    return a;
}

int Number::getNum2() {
    return b;
}

int Number::getAdd() {
    return a + b;
}
