#include <iostream>
#include "setdata.h"
#include "getmaxmin.h"

int main(void) {
    vector<string> v;
    CSetData sd;
    sd.setData(v);
    CGetMaxMin* gmm = new CGetMaxMin;
    gmm->max(v);
    gmm->min(v);
    delete gmm;
    return 0;
}
