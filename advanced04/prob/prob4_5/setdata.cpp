#include "setdata.h"
#include <iostream>

CSetData::CSetData() {}
CSetData::~CSetData() {}

void CSetData::setdata(list<int>& l, int r) {
    int a = 0;
    int i;
    list<int>::iterator ite;

    cout << "正の整数値を入力してください" << endl;
    cout << "(-1を入力すると終了します)" << endl;
    while(1) {
        cout << "正の整数を入力：";
        cin >> a;
        if(a == -1) break;
        l.push_back(a);
    }
    cout << endl;

    l.remove(r);

    for(ite=l.begin(); ite!=l.end(); ite++)
        cout << *ite << " ";
    cout << endl;
}
