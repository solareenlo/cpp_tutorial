#include "fielder.h"

CFielder::CFielder(string name, int number) {
    m_name = name;
    m_number = number;
    m_kind = "野手";
}

void CFielder::play() {
    cout << "飛んできた球を取る" << endl;
}
