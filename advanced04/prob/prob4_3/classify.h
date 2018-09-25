#ifndef _CLASSIFY_H_
#define _CLASSIFY_H_

#include <vector>

using namespace std;

class CCla {
    public:
        CCla();
        ~CCla();
        void classify(vector<int>& v, int num, int amari);
    private:
        int m_count;
};

#endif
