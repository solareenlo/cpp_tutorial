// 値, 引数, 関数それぞれのconstの練習
#include <iostream>
#include <string>
#include "sample.h"

using namespace std;

int main(void) {
    CSample s;
    cout << "定数：" << s.m_cst << endl;
    s.setStr("ABCDEFG");
    cout << s.getStr() << endl;
    return 0;
}
