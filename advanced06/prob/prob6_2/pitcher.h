#ifndef _PITCHER_H_
#define _PITCHER_H_

#include "baseballplayer.h"

class CPitcher : public CBaseballPlayer {
    public:
        CPitcher(string name, int number);
        void play();
};

#endif
