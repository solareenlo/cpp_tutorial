#include <iostream>
#include "inter1.h"
#include "inter2.h"
#include "sample.h"

void foo(IInter1*);
void bar(IInter2*);

int main(void) {
    CSample* s = new CSample();
    foo((IInter1*)s);
    bar((IInter2*)s);
    return 0;
}

void foo(IInter1* p) {
    p->func1();
    p->func2();
}

void bar(IInter2* p) {
    p->func3();
    p->func4();
}
