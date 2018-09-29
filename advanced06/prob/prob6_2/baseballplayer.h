#ifndef _BASEBALLPLAYER_H_
#define _BASEBALLPLAYER_H_

#include <iostream>
#include <string>

using namespace std;

class CBaseballPlayer {
    protected:
        int m_number; // 背番号
        string m_kind; // 種類
        string m_name; // 名前
    public:
        virtual ~CBaseballPlayer() {}; // {}が無いとエラーになる. なぜなら「.cpp」を省略しているため.
        int getNumber(){return m_number;};
        string getKind(){return m_kind;};
        string getName(){return m_name;};
        virtual void play() = 0;
};

#endif
