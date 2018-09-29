#include "fightercraft.h"

CFighterCraft::CFighterCraft() {
    m_type = "＜戦闘機＞";
}

void CFighterCraft::fly() {
    cout << "攻撃に出るまでに飛行" << endl;
}

void CFighterCraft::fight() {
    cout << "戦闘します" << endl;
}
