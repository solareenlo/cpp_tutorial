#ifndef _VECTOR2_H_
#define _VECTOR2_H_

#include <iostream>
#include <string>

using namespace std;

class CVector3 {
    public:
        double x;
        double y;
        double z;
    public:
        CVector3& operator=(const CVector3& v);
        CVector3& operator+=(const CVector3& v);
        CVector3& operator-=(const CVector3& v);
};

CVector3 operator+(const CVector3&, const CVector3&);
CVector3 operator-(const CVector3&, const CVector3&);
CVector3 operator*(const double, const CVector3&);

#endif
