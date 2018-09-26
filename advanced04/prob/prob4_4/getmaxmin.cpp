#include "getmaxmin.h"
#include "setdata.h"
#include <iostream>

CGetMaxMin::CGetMaxMin() {}
CGetMaxMin::~CGetMaxMin() {}

void CGetMaxMin::max(vector<string>& s) {
    vector<string>::iterator ite;
    int i = 0, max;

    max = s[0].length();
    for(ite = s.begin(); ite != s.end(); ite++) {
        if(max < s[i].length())
            max = s[i].length();
        i++;
    }

    cout << "最長の単語：";
    for(i = 0; i < s.size(); i++) {
        if(max == s[i].length())
            cout << s[i] << " ";
    }
    cout << endl;
}

void CGetMaxMin::min(vector<string>& s) {
    vector<string>::iterator ite;
    int i = 0, min;

    min = s[0].length();
    for(ite = s.begin(); ite != s.end(); ite++) {
        if(min > s[i].length())
            min = s[i].length();
        i++;
    }

    cout << "最短の単語：";
    for(i = 0; i < s.size(); i++) {
        if(min == s[i].length())
            cout << s[i] << " ";
    }
    cout << endl;
}
