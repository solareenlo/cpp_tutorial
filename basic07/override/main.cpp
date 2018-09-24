#include "sup.h"
#include "sub.h"

int main(void) {
    Sup *sp1;
    Sub *sp2;
    sp1 = new Sup();
    sp2 = new Sub();
    sp1->func();
    sp2->func();
    delete sp1;
    delete sp2;
    return 0;
}
