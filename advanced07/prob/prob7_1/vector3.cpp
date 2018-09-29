#include "vector3.h"

CVector3 operator+(const CVector3& v1, const CVector3& v2) {
    CVector3 v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    v.z = v1.z + v2.z;
    return v;
}

CVector3 operator-(const CVector3& v1, const CVector3& v2) {
    CVector3 v;
    v.x = v1.x - v2.x;
    v.y = v1.y - v2.y;
    v.z = v1.z - v2.z;
    return v;
}

CVector3 operator*(const double d, const CVector3& v) {
    CVector3 r;
    r.x = d * v.x;
    r.y = d * v.y;
    r.z = d * v.z;
    return r;
}

CVector3& CVector3::operator=(const CVector3& v) {
    x = v.x;
    y = v.y;
    z = v.z;
    return *this;
}

CVector3& CVector3::operator+=(const CVector3& v) {
    x += v.x;
    y += v.y;
    z += v.z;
    return *this;
}

CVector3& CVector3::operator-=(const CVector3& v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
    return *this;
}
