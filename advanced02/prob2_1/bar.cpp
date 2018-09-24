#include "bar.h"
#include "foo.h"
#include <iostream>

using namespace std;

Bar::Bar() {
    pFoo = new Foo(this);
}

Bar::~Bar() {
    delete pFoo;
}

void Bar::func1(Foo *pFoo) {
    pFoo->hoge();
}

void Bar::func2() {
    cout << "Bar::func2()" << endl;
}
