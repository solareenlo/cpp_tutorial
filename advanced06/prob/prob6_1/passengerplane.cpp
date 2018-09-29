#include "passengerplane.h"

CPassengerPlane::CPassengerPlane() {
    m_type = "＜旅客機＞";
}

void CPassengerPlane::fly() {
    cout << "乗客を乗せて目的地まで飛行" << endl;
}

void CPassengerPlane::carry() {
    cout << "乗客を運びます" << endl;
}
