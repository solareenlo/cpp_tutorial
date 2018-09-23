#include <iostream>
#include "rat.h"

using namespace std;

int main(void) {
    CRat *r1, *r2, *r3;
    r1 = new CRat(); // 1匹目のネズミ生成
    r1->squeak(); // 1匹目のネズミが鳴く
    CRat::showNum(); // ネズミの数を表示
    r2 = new CRat();
    r2->squeak();
    r3 = new CRat();
    r3->squeak();
    CRat::showNum();
    delete r1; // 1匹目のネズミを消去
    delete r2;
    CRat::showNum();
    delete r3;
    CRat::showNum();
    return 0;
}
