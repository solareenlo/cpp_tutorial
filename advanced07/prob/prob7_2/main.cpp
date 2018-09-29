#include <iostream>
#include <string>
#include "newstring.h"

using namespace std;

int main(void) {
    NewString s1("HelloWorld"); // 文字列をあらかじめ入れて、インスタンスs1を生成
    cout << "s1 = " << s1.getValue() << endl;

    NewString s2; // 文字列が入っていない空のインスタンスs2を生成
    s2 = s1; // s2にs1の文字列を代入
    cout << "s2 = " << s2.getValue() << endl;

    NewString s3(s2); // s1の文字列が代入されたs2の文字列をs3に代入(つまりs3にs1の文字列が代入された)
    cout << "s3 = " << s3.getValue() << endl;

    NewString s4("HELLOWORLD");
    cout << "s4 = " << s4.getValue() << endl;

    NewString s5(s4);
    cout << "s5 = " << s5.getValue() << endl;

    NewString s6("HELLOWORLD!");
    cout << "s6 = " << s6.getValue() << endl;

    if(s1 == s2) cout << "s1 == s2" << endl;
    else cout << "s1 != s2" << endl;

    if(s1 == s6) cout << "s1 == s6" << endl;
    else cout << "s1 != s6" << endl;

    return 0;
}
