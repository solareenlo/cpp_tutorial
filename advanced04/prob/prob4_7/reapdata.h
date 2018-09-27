#ifndef _REAPDATA_H_
#define _REAPDATA_H_

#include <list>
#include <string>

using namespace std;

class CReapData {
    public:
        CReapData();
        ~CReapData();
        void reapdata(list<string>& l, int n);
};

#endif
