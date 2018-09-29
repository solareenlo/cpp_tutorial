#include "vector2.h"

CVector2 operator+(const CVector2& v1, const CVector2& v2) {
    CVector2 v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v;
}

CVector2 operator-(const CVector2& v1, const CVector2& v2) {
    CVector2 v;
    v.x = v1.x - v2.x;
    v.y = v1.y - v2.y;
    return v;
}

CVector2 operator*(const double d, const CVector2& v) {
    CVector2 r;
    r.x = d * v.x;
    r.y = d * v.y;
    return r;
}

CVector2& CVector2::operator=(const CVector2& v) {
    x = v.x;
    y = v.y;
    return *this;
}

CVector2& CVector2::operator+=(const CVector2& v) {
    x += v.x;
    y += v.y;
    return *this;
}

CVector2& CVector2::operator-=(const CVector2& v) {
    x -= v.x;
    y -= v.y;
    return *this;
}
