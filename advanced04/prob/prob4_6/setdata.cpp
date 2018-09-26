#include "setdata.h"
#include <iostream>
#include <list>

using namespace std;

CSetData::CSetData() {}
CSetData::~CSetData() {}

void CSetData::setdata(list<int>& l) {
    int a = 0;
    list<int>::iterator ite;

    cout << "正の整数を入力してください"  << endl;
    cout << "(-1を入力すると終了します)" << endl;
    while(1) {
        cout << "正の整数を入力：";
        cin >> a;
        if(a == -1) break;
        l.push_back(a);
        cout << endl;
        l.sort();
        cout << "入力された数：";
        for(ite = l.begin(); ite != l.end(); ite++)
            cout << *ite << " ";
        cout << endl << endl;
    }
}
