#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

class CAmbulance : public CCar { // 救急車クラス
    public:
        CAmbulance(); // コンストラクタ
        virtual ~CAmbulance(); // デストラクタ
        void savePeople(); // 救命救急活動
    private:
        int m_number;
};

#endif // _AMBLANCE_H_
