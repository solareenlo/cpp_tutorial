#include "classify.h"
#include <iostream>

CCla::CCla() {}
CCla::~CCla() {}

void CCla::classify(vector<int>& v, int num, int amari) {
    m_count = 0;
    cout << "1の位が" << amari << "の整数：";
    for(unsigned int i = 0; i < num; i++) {
        if(v[i] % 10 == amari) {
            cout << v[i] << " ";
            m_count++;
        }
    }

    if(m_count == 0)
        cout << "なし";
    cout << endl;
}
