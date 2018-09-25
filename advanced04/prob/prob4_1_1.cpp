#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> v;
    vector<int>::iterator vi;
    int a;

    cout << "正の整数を入力してください(-1を入力すると終了)" << endl;
    while(1) {
        cout << "正の整数を入力：";
        cin >> a;
        if( a == -1) {
            break;
        }
        v.push_back(a);
    }

    cout << "データの個数：" << v.size() << endl;

    cout << "入力された正の整数：";
    for(unsigned int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl << endl;

    cout << "偶数：";
    for(unsigned int i = 0; i <v.size(); i++) {
        if(v[i] % 2 == 0)
            cout << v[i] << " ";
    }
    cout << endl;

    cout << "奇数：";
    for(unsigned int i = 0; i <v.size(); i++) {
        if(v[i] % 2 != 0)
            cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
