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