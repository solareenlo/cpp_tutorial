#include "hoge.h"
#include <iostream>

using namespace std;

Hoge::Hoge() {
    cout << "コンストラクタしました" << endl;
}

Hoge::~Hoge() {
    cout << "デストラクタしました" << endl;
}

void Hoge::foo() {
    cout << "fooメソッドです" << endl;
}
