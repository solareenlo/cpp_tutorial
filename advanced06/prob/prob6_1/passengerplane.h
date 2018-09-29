#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_

#include "airplane.h"

class CPassengerPlane : public CAirPlane {
    public:
        CPassengerPlane();
        void fly();
        void carry();
};

#endif
