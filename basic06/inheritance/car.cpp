#include <iostream>
#include "car.h"

using namespace std;

CCar::CCar() : m_fuel(0), m_migration(0) { // コンストラクタ
    cout << "CCarオブジェクト生成" << endl;
}

CCar::~CCar() { // デストラクタ
    cout << "CCarオブジェクト消去" << endl;
}

void CCar::move() { // 移動メソッド
    if(m_fuel > 0) { // 燃料があるなら移動
        m_migration++; // 移動距離を1つ増やして
        m_fuel--; // 残り燃料を1つ減らして
    }
    cout << "移動距離：" << m_migration << endl;
    cout << "残り燃料：" << m_fuel << endl;
}

void CCar::supply(int fuel) { // 給油メソッド
    if(fuel > 0) {
        m_fuel += fuel;
    }
    cout << "残り燃料：" << m_fuel << endl;
}
