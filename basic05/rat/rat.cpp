#include "rat.h"
#include <iostream>

using namespace std;

int CRat::m_count = 0; // 静的変数であるネズミの数(m_count)の初期値を0に設定

CRat::CRat() : m_id(0) { // コンストラクタ, インスタンス生成, メモリ確保, インスタンス変数初期化
    m_id = m_count; // 現在のネズミの数をIDとする
    m_count++; // ネズミの数を1つ増やす
}

CRat::~CRat() { // デストラクタ, インスタンス消去, メモリ解放
    cout << "ネズミ" << m_id << "：消去" << endl;
    m_count--; // ネズミの数を1つ減らす
}

void CRat::showNum() {
    cout << "現在のネズミの数は、" << m_count << "匹です." << endl;
}

void CRat::squeak() {
    cout << "ネズミ" << m_id << "：" << "チューチュー" << endl;
}
