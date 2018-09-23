#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

class Vector2D { // 2次元ベクトルクラス
    protected:
        int m_x;
        int m_y;
    public:
        Vector2D(); // コンストラクタ
        void setValue(int x, int y); // 値の設定
        int getX(); // X座標の取得
        int getY(); // Y座標の取得
    protected:
        void init(); // 値の初期化
};

#endif // _VECTOR2D_H_
