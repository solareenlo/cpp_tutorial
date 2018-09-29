#ifndef _CATCHER_H_
#define _CATCHER_H_

#include "baseballplayer.h"

class CCatcher : public CBaseballPlayer {
    public:
        CCatcher(string name, int i);
        void play();
};

#endif
