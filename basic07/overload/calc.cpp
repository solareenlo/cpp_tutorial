#include "calc.h"

CCalc::CCalc() : m_a(0), m_b(0) { // デフォルトコンストラクタ
}

CCalc::CCalc(int a, int b) : m_a(a), m_b(b) { // 引数付きのコンストラクタ
}

int CCalc::add() { // 足し算処理その１
    return m_a + m_b;
}

int CCalc::add(int a, int b) { // 足し算処理その２
    return a + b;
}

void CCalc::setValue(int a, int b) { // 値の設定
    m_a = a;
    m_b = b;
}

int CCalc::getA() { // m_aの値取得
    return m_a;
}

int CCalc::getB() { // m_bの値取得
    return m_b;
}
