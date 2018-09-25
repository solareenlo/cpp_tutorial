#include "max_min.h"
#include <iostream>

using namespace std;

CMax_Min::CMax_Min() : m_max(0), m_min(0) {}
CMax_Min::~CMax_Min() {}

void CMax_Min::max(vector<int>& v, int num) {
    m_max = v[0];
    for(unsigned int i = 0; i < num; i++) {
        if(m_max < v[i])
            m_max = v[i];
    }
    cout << "最大値：" << m_max << endl;
}

void CMax_Min::min(vector<int>& v, int num) {
    m_min = v[0];
    for(unsigned int i = 0; i < num; i++) {
        if(m_min > v[i])
            m_min = v[i];
    }
    cout << "最小値：" << m_min << endl;
}
