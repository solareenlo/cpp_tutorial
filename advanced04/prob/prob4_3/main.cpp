#include <iostream>
#include <vector>
#include "classify.h"
#include "max_min.h"

using namespace std;

int main(void) {
    vector<int> v;
    int a, count;
    unsigned int i;

    cout << "正の整数を入力してください(-1を入力すると終了)" << endl;
    while(1) {
        cout << "正の整数を入力：";
        cin >> a;
        if(a == -1)
            break;
        v.push_back(a);
    }
    cout << endl;

    CCla *cv = new CCla;
    cv->classify(v, v.size(), 0);
    cv->classify(v, v.size(), 1);
    cv->classify(v, v.size(), 2);
    cv->classify(v, v.size(), 3);
    cv->classify(v, v.size(), 4);
    cv->classify(v, v.size(), 5);
    cv->classify(v, v.size(), 6);
    cv->classify(v, v.size(), 7);
    cv->classify(v, v.size(), 8);
    cv->classify(v, v.size(), 9);
    delete cv;
    cout << endl;

    CMax_Min * cmm = new CMax_Min;
    cmm->max(v, v.size());
    cmm->min(v, v.size());
    delete cmm;

    return 0;
}
