#include "reapdata.h"
#include <iostream>

using namespace std;

CReapData::CReapData() {}
CReapData::~CReapData() {}

void CReapData::reapdata(list<string>& l, int n) {
    int i;
    string s;
    list<string>::iterator ite;

    for(ite=l.begin(); ite!=l.end(); ite++) {
        s = *ite;
        i = s.size();
        if(i >= n)
            l.erase(ite);
    }

    cout << "5文字未満の文字列：";
    for(ite=l.begin(); ite!=l.end(); ite++)
        cout << *ite << " ";
    cout << endl;
}
