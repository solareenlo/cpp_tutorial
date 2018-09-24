#include "sample.h"

CSample::CSample() {
    m_str = "";
}

void CSample::setStr(const string str) {
    m_str = str;
    // str = "test"; // ←これは出来ない.引数strはconstされてて、変更不可だから.
}

string CSample::getStr() const {
    return m_str;
    // m_str = "one"; // ←これは出来ない.メソッドgetStr()がconstされてて、メンバ変数は変更不可だから.
}
