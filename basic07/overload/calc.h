#ifndef _CALC_H_
#define _CALC_H_

class CCalc {
    private:
        int m_a, m_b;
    public:
        CCalc(); // デフォルトコンストラクタ
        CCalc(int a, int b); // コンストラクタ(引数付き)
        int add(); // 足し算処理その１
        int add(int a, int b); // 足し算処理その２
        void setValue(int a, int b); // 値の設定
        int getA(); // m_aの値の取得
        int getB(); // m_bの値の取得
};
#endif
