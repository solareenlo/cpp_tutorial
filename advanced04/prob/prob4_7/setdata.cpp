#include "setdata.h"
#include <string>
#include <iostream>

using namespace std;

CSetData::CSetData() {}
CSetData::~CSetData() {}

void CSetData::setdata(list<string>& l) {
    string a;
    int i;
    list<string>::iterator ite;

    cout << "文字列を入力してください" << endl;
    cout << "何も入力せずに、エンターを押すと、終了します" << endl;
    while(1) {
        cout << "文字列入力：";
        getline(cin, a);
        if(a == "") break;
        l.push_back(a);
    }
    cout << endl;
}
