#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include "inter1.h"
#include "inter2.h"

using namespace std;

class CSample : public IInter1, public IInter2 {
    public:
        void func1() {cout << "func1" << endl;}
        void func2() {cout << "func2" << endl;}
        void func3() {cout << "func3" << endl;}
        void func4() {cout << "func4" << endl;}
};

#endif
