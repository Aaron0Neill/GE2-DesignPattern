#pragma once

#include "brick.h"

class ClayBrick : public Brick
{
public:
    ClayBrick(){
        std::cout << "Clay Brick created at: " << &(*this) << std::endl;
    }

    virtual ~ClayBrick(){
        std::cout << "Clay Brick Destroyed at: " << &(*this) << std::endl;
    }

    virtual std::string outputBrick()override{
        std::stringstream s;
        s << "I am a Clay Brick Located at: " << &(*this);
        return s.str();
    }

};