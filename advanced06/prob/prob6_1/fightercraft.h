#ifndef _FIGHTERCRAFT_H_
#define _FIGHTERCRAFT_H_

#include "airplane.h"

class CFighterCraft : public CAirPlane{
    public:
        CFighterCraft();
        void fly();
        void fight();
};

#endif
