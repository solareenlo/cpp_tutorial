#include <iostream>
#include <list>

using namespace std;

int main(void) {
    list<int> li; // int型でlistクラスをliという名で生成
    li.push_back(10); // liの先頭に10を代入
    li.push_back(21); // 10の後ろに21を挿入
    li.push_back(30); // 21の後ろに30を挿入
    list<int>::iterator itr; // listクラスのポインタみたいなitrを生成
    itr = li.begin(); // ポインタみたいなitrをliの先頭に配置
    itr++; // itrを1つ増やす
    li.insert(itr, 40); // itrが指し示しているところ(=先頭から2つ目)に40を挿入
    for(itr = li.begin(); itr != li.end(); itr++) { // itrを始めから1つずつ増やして、最後になるまで以下を実行
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
