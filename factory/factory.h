#include <iostream>
#include "plasticBrick.h"
#include "clayBrick.h"
#include "brick.h"
#include <vector>

class Factory
{
public:
    Factory(){

    }
    virtual ~Factory(){

    }

    virtual std::vector<Brick*> getBrick(int const& qty) =0;
};

class PlasticFactory : public Factory
{
public:
    PlasticFactory(){

    }
    virtual ~PlasticFactory(){

    }

    virtual std::vector<Brick*> getBrick(int const& qty){
        std::cout << "Order of Plastic bricks sum of: " << qty <<std::endl;
        std::vector<Brick*> order;
        for(int i=0; i < qty; ++i)
        {
            order.push_back(new PlasticBrick());
        }
        return order;
    };
};

class ClayFactory : public Factory
{
public:
    ClayFactory(){

    }
    virtual ~ClayFactory(){

    }

    virtual std::vector<Brick*> getBrick(int const& qty){
        std::cout << "Order of clay bricks sum of: " << qty <<std::endl;
        std::vector<Brick*> order;
        for(int i=0; i < qty; ++i)
        {
            order.push_back(new ClayBrick());
        }
        return order;
    };
};