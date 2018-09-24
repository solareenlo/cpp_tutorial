#include <iostream>

using namespace std;

bool judge(int);

int main(void) {
    int n;
    cout << "整数値を入力してください：";
    cin >> n;
    if(judge(n)) {
        cout << "この整数は0以上です" << endl;
    } else {
        cout << "この整数は0未満です" << endl;
    }
    return 0;
}

bool judge(int n) {
    if(n >= 0) {
        return true;
    } else {
        return false;
    }
}
