#ifndef _FIELDER_H_
#define _FIELDER_H_

#include "baseballplayer.h"

class CFielder : public CBaseballPlayer {
    public:
        CFielder(string name, int number);
        void play();
};

#endif
