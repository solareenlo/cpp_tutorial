#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(void) {
    vector<string> v; // vectorクラス型のvを生成
    list<string> l; // listクラス型のlを生成
    v.push_back("HELLO"); // vの1番初めにHELLOをセット
    v.push_back("WORLD"); // vのHELLOの次にWORLDをセット
    l.push_back("hello"); // lの1番初めにhelloをセット
    l.push_back("world"); // lのhelloの次にworldをセット
    l.push_back("!"); // lのworldの次に!をセット
    vector<string>::iterator vi; // vector型のイテレータviを生成
    list<string>::iterator li; // list型のイテレータliを生成

    for(vi = v.begin(); vi != v.end(); vi++) {
        cout << *vi << endl; // viの中身を出力
    }

    li = l.begin(); // イテレータliをlの先頭に配置
    l.remove(*li); // liが指し示しているデータ(lの先頭)を消去
    for(li = l.begin(); li != l.end(); li++) {
        cout << *li << endl; // liの中身を出力
    }

    return 0;
}
