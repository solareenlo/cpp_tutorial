#include <iostream>
#include "fighter.h"

using namespace std;

int main(void) {
    Fighter f; // 戦闘機クラス(子クラス)
    Airplane a; // 飛行機クラス(親クラス)
    a.fly(); // 飛行機が飛行する
    f.fly(); // 戦闘機が飛行する
    f.fight(); // 戦闘機が戦闘する
    return 0;
}
