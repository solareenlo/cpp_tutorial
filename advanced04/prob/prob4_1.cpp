#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> vodd;
    vector<int> veven;
    int a;

    cout << "正の整数を入力してください(-1を入力すると終了)" << endl;
    while(1) {
        cout << "正の整数を入力：";
        cin >> a;
        if( a == -1) {
            break;
        } else if(a % 2 == 0) {
            veven.push_back(a);
        } else if(a % 2 != 0) {
            vodd.push_back(a);
        }
    }
    cout << endl;

    cout << "偶数：";
    for(unsigned int i = 0; i <veven.size(); i++) {
        if(veven[i] % 2 == 0)
            cout << veven[i] << " ";
    }
    cout << endl;

    cout << "奇数：";
    for(unsigned int i = 0; i <vodd.size(); i++) {
        if(vodd[i] % 2 != 0)
            cout << vodd[i] << " ";
    }
    cout << endl;

    return 0;
}
