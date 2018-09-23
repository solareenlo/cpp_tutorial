#ifndef _FUNDCALC_H_
#define _FUNDCALC_H_

class FundCalc {
    protected:
        double m_num1; // 1つ目の数
        double m_num2; // 2つ目の数
    public:
        FundCalc(); // コンストラクタ
        void setNum1(double num); // 1つ目の数をセット
        void setNum2(double num); // 2つ目の数をセット
        double getNum1(); // 1つ目の数を取得
        double getNum2(); // 2つ目の数を取得
        double add(); // 2つの数の和を返す
        double sub(); // 2つの数の差を返す
};

#endif // _FUNDCALC_H_
