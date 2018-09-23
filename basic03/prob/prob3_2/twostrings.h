#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_

#include <iostream>
#include <string>

using namespace std;

class TwoStrings {
    private:
        string m_string1; // 1つ目の文字列
        string m_string2; // 2つ目の文字列
    public:
        void setString1(string s); // 1つ目の文字列を設定
        void setString2(string s); // 2つ目の文字列を設定
        string getString1(); // 1つ目の文字列を取得
        string getString2(); // 2つ目の文字列を取得
        string getConnectedString(); // 2つの文字列を合わせたものを取得
        int getConnectedLength(); // 2つ文字列を合わせた文字列の長さを取得
};

#endif // _TWOSTRINGS_H_
