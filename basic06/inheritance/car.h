#ifndef _CAR_H_
#define _CAR_H_

class CCar { // 自動車クラス
    public:
        CCar(); // コンストラクタ
        virtual ~CCar(); // デストラクタ
        void move(); // 移動メソッド
        void supply(int fuel); // 給油メソッド
    private:
        int m_fuel; // 燃料
        int m_migration; // 移動距離
};

#endif // _CAR_H_
