#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
    map <string, int> score; // 連想配列scoreのキーはstring型、要素はint型
    string names[] = {"Abe", "Toro", "Tetsu"}; // キーを設定
    score[names[0]] = 10; // キーAbeの要素に10を代入
    score[names[1]] = 20; // キーToroの要素に20を代入
    score[names[2]] = 30; // キーTetsuの要素に30を代入
    int i;
    for(i=0; i<3; i++)
        cout << names[i] << " : " << score[names[i]] << endl;
    return 0;
}
