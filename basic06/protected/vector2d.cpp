#include "vector2d.h"

Vector2D::Vector2D() { // コンストラクタ
    init();
}

void Vector2D::setValue(int x, int y) { // 値の設定
    m_x = x;
    m_y = y;
}

int Vector2D::getX() { // X座標の取得
    return m_x;
}

int Vector2D::getY() { // Y座標の取得
    return m_y;
}

void Vector2D::init() { // 値の初期化
    m_x = 0;
    m_y = 0;
}
