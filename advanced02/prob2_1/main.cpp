#include "foo.h"
#include "bar.h"
#include <iostream>

using namespace std;

int main(void) {
    Bar *pb;
    Foo *pf;

    pf->hoge();
    pb->func2();
    pf->fuga(pb);
    pb->func1(pf);

    return 0;
}
