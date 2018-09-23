#ifndef _POSITION2D_H_
#define _POSITION2D_H_

#include "vector2d.h"

class Position2D : public Vector2D {
    public:
        void resetPosition(); // 位置のリセット
        void move(int dx, int dy); // 移動
};

#endif // _POSITION2D_H_
