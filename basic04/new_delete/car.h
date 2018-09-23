#ifndef _CAR_H_
#define _CAR_H_

class CCar {
    public:
        CCar(); // コンストラクト(インスタンスの初期化とメモリ確保)
        ~CCar(); // デストラクト(インスタンスのメモリ解放)
        void move();
        void supply(int fuel);
    private:
        int m_fuel; // 燃料
        int m_migration; // 移動距離
};

#endif // _CAR_H_
