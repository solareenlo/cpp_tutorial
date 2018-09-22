#ifndef _SAMPLE_H_
#define _SAMPLE_H_

class CSample {
    public: // メンバ関数を宣言
        void set(int num); // m_numに値を設定する
        int get(); // m_numの値を取得する
    private: // メンバ変数を宣言
        int m_num;
};

#endif // _SAMPLE_H_
