#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <iostream>
#include <string>

using namespace std;

class CAirPlane {
    public:
        CAirPlane();
        string getType();
        virtual void fly() = 0;
    protected:
        string m_type;
};

#endif
