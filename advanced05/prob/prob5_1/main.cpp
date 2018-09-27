#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
    int i;
    string s;
    string name[] = {"cat", "dog", "bird", "tiger"};
    map<string, string> animal;
    map<string, string>::iterator ite;

    animal[name[0]] = "猫";
    animal[name[1]] = "犬";
    animal[name[2]] = "鳥";
    animal[name[3]] = "トラ";

    cout << "英語で動物の名前(cat, dog, bird, tigerのうちいずれか)を入力してください：";
    cin >> s;
    cout << endl;

    ite = animal.find(s);
    if(ite == animal.end())
        cout << "対応するデータは登録されていません" << endl;

    for(i=0; i<4; i++)
        if(s == name[i])
            cout << "「" << animal[name[i]] << "」です" << endl;

    return 0;
}
