#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a;
    string s;
    s = "数値を入力してください：";
    cout << s;
    cin >> a;
    cout << a << "を2倍した数は、" << a*2 << "です。" << endl;
    return 0;
}
