#ifndef BALL_H
#define BALL_H

#include "HeightMap.h"
#include "PhysicsBody.h"

class Ball : public PhysicsBody
{
public:
    Ball();
    HeightMap* heightmap;

    Ball(float m = 1.0f, QVector3D startPos = {0,0,0}, HeightMap* map = nullptr)
        : PhysicsBody(m, startPos), heightmap(map){}


};

#endif // BALL_H
