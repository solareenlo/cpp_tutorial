#include <iostream>
#include <list>
#include <string>
#include "setdata.h"
#include "reapdata.h"

using namespace std;

int main(void) {
    list<string> l;

    CSetData* csd = new CSetData;
    csd->setdata(l);
    delete csd;

    CReapData* crd = new CReapData;
    crd->reapdata(l, 5);
    delete crd;

    return 0;
}
