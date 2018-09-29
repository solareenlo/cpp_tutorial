#ifndef _NEWSTRING_H_
#define _NEWSTRING_H_

#include <iostream>
#include <string>

using namespace std;

class NewString {
    public:
        string m_value;
    public:
        NewString(); // コンストラクタ
        NewString(string value); // 文字列を代入するコンストラクタ
        NewString(NewString& value); // 他のクラスを代入するコンストラクタ
        NewString& operator=(NewString& n); // =演算子のオーバーロード
        bool operator==(NewString& n); // 
        string getValue(); // ゲッター
};

#endif
