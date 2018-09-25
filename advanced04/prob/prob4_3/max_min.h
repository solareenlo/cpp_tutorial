#ifndef _MAX_MIN_H_
#define _MAX_MIN_H_

#include <vector>

using namespace std;

class CMax_Min {
    public:
        CMax_Min();
        ~CMax_Min();
        void max(vector<int>& v, int num);
        void min(vector<int>& v, int num);
    private:
        int m_max;
        int m_min;
};

#endif
