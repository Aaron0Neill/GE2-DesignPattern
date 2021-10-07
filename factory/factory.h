#include <iostream>
#include "plasticBrick.h"
#include "clayBrick.h"
#include "brick.h"
#include "brickHandler.h"
#include <vector>

class Factory
{
public:
    Factory(){

    }
    virtual ~Factory(){

    }

    virtual void getBrick(int const& qty, std::vector<BrickHandler*>* t_dest) =0;
};

class PlasticFactory : public Factory
{
public:
    PlasticFactory(){

    }
    virtual ~PlasticFactory(){

    }

    virtual void getBrick(int const& qty, std::vector<BrickHandler*>* t_dest){
        std::cout << "Order of Plastic bricks sum of: " << qty <<std::endl;
        for(int i=0; i < qty; ++i)
        {
            t_dest->push_back(new BrickHandler(new PlasticBrick()));
        }
    };
};

class ClayFactory : public Factory
{
public:
    ClayFactory(){

    }
    virtual ~ClayFactory(){

    }

    virtual void getBrick(int const& qty, std::vector<BrickHandler*>* t_dest){
        std::cout << "Order of clay bricks sum of: " << qty <<std::endl;
        for(int i=0; i < qty; ++i)
        {
            t_dest->push_back(new BrickHandler(new ClayBrick()));
        }
    };
};