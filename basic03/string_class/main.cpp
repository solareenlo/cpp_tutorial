#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s; // sというクラスがstringのインスタンス(実態)を生成
    s = "This is a";
    s.append(" pen."); // インスタンスsに「 pen.」を追加
    cout << s << endl;
    cout << "文字列の長さ：" << s.length() << endl;
    printf("char*:%s\n", s.c_str()); // インスタンスsをC言語の形式に変換し出力
    return 0;
}
