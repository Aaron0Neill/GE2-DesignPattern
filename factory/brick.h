#pragma once
#include <iostream>

#include <sstream>

class Brick
{
public:
    Brick(){
    };
    virtual ~Brick(){
    };

    virtual std::string outputBrick() = 0;
};