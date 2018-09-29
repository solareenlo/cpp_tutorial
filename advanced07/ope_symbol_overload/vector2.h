#ifndef _VECTOR2_H_
#define _VECTOR2_H_

#include <iostream>
#include <string>

using namespace std;

class CVector2 {
    public:
        double x;
        double y;
    public:
        CVector2& operator=(const CVector2& v);
        CVector2& operator+=(const CVector2& v);
        CVector2& operator-=(const CVector2& v);
};

CVector2 operator+(const CVector2&, const CVector2&);
CVector2 operator-(const CVector2&, const CVector2&);
CVector2 operator*(const double, const CVector2&);

#endif
