#include "setdata.h"
#include <iostream>

CSetData::CSetData() {}

CSetData::~CSetData() {}

void CSetData::setData(vector<string>& s){
    string a = "abc";
    cout << "文字列を入力してください" << endl;
    cout << "(何も入力せずに、エンターを押すと、終了します)" << endl;
    while(1) {
        cout << "文字列を入力：";
        getline(cin, a);
        if(a == "") break;
        s.push_back(a);
    }
    cout << endl;
}
