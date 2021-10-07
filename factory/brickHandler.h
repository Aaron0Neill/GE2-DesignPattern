#ifndef BRICK_HANDLER_INCLUDE
#define BRICK_HANDLER_INCLUDE

#include "brick.h"

class BrickHandler
{
public:
    BrickHandler(Brick* b) : m_brick(&(*b)){
        
    };

    ~BrickHandler(){
        delete m_brick;
    }

    Brick* operator->() {return &(*m_brick);}
private:
    Brick* m_brick;
};
#endif