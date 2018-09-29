#include "catcher.h"

CCatcher::CCatcher(string name, int number) {
    m_name = name;
    m_number = number;
    m_kind = "キャッチャー";
}

void CCatcher::play() {
    cout << "ピッチャーの球を受ける" << endl;
}
