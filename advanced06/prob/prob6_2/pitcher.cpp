#include "pitcher.h"

CPitcher::CPitcher(string name, int number) {
    m_name = name;
    m_number = number;
    m_kind = "ピッチャー";
}

void CPitcher::play() {
    cout << "投球する" << endl;
}
