#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include <string>

using namespace std;

class CSample {
    private:
        string m_str;
    public:
        CSample();
        void setStr(const string str); // 引数変更不可
        string getStr() const; // メソッド内でのメンバ変数変更不可
    public:
        static const int m_cst = 123; // m_cstは変更不可
};

#endif
