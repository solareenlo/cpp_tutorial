#include "object.h"

int Object::m_objectNum = 0; // 静的メンバ変数の初期値を設定

Object::Object() { // コンストラクタ
    m_objectNum++; // オブジェクトの数をカウントする
}

Object::~Object() { // デストラクタ
    m_objectNum--; // オブジェクトの数をカウントする
}

int Object::getObjectNum() {
    return m_objectNum;
}
