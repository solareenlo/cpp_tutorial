#include <iostream>
#include "twostrings.h"

using namespace std;

int main(void) {
    TwoStrings s;
    s.setString1("Hello");
    s.setString2("World");
    cout << "1つ目の文字列は" << s.getString1() << endl;
    cout << "2つ目の文字列は" << s.getString2() << endl;
    cout << "2つの文字列を合成した文字列は" << s.getConnectedString() << endl;
    cout << "合成した文字列の長さは" << s.getConnectedLength() << endl;

    return 0;
}
