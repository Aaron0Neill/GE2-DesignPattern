#pragma once

#include "brick.h"

class PlasticBrick : public Brick
{
public:
    PlasticBrick(){
        std::cout << "Plastic Brick created at: " << &(*this) << std::endl;
    }

    virtual ~PlasticBrick(){
        std::cout << "Plastic Brick Destroyed at: " << &(*this) << std::endl;
    }

    virtual std::string outputBrick()override{
        std::stringstream s;
        s << "I am a Plastic Brick Located at: " << &(*this);
        return s.str();
    }

};