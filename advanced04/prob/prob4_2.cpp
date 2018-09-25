#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> v;
    int a, max, min;
    unsigned int i;

    cout << "正の整数を入力してください(-1を入力すると終了)" << endl;
    while(1) {
        cout << "正の整数を入力：";
        cin >> a;
        if(a == -1)
            break;
        v.push_back(a);
    }

    max = v[0];
    min = v[0];
    for(i = 1; i < v.size(); i++) {
        if(max < v[i])
            max = v[i];
        if(min > v[i])
            min = v[i];
    }

    cout << "最大値：" << max << endl;
    cout << "最小値：" << min << endl;
    return 0;
}
