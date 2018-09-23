#ifndef _RAT_H_
#define _RAT_H_

class CRat {
    public:
        CRat(); // コンストラクタ
        ~CRat(); // デストラクタ
        static void showNum(); // 静的メンバ関数, ネズミの現在の数を表示
        void squeak(); // ネズミがチューチュー鳴くよ
    private:
        int m_id; // ネズミのID
        static int m_count; // 静的メンバ変数, ネズミの現在の数
};

#endif // _RAT_H_
