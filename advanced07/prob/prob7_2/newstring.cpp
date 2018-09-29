#include "newstring.h"

// コンストラクタ
NewString::NewString() {
    m_value = "";
}

// 文字列を代入するコンストラクタ
NewString::NewString(string value) {
    m_value = value;
}

// 他のクラスを代入するコンストラクタ
NewString::NewString(NewString& value) {
    m_value = value.getValue();
}

// =演算子のオーバーロード
NewString& NewString::operator=(NewString& n) {
    m_value = n.getValue();
    return *this;
}

bool NewString::operator==(NewString& n) {
    if(strcmp(m_value.c_str(), n.getValue().c_str()) == 0)
        return true;
    return false;
}

// ゲッター
string NewString::getValue() {
    return m_value;
}
