#include "factory.h"
#include "outputStream.h"
#include "brickHandler.h"


int main()
{
    outputStream* io;
    std::vector<BrickHandler*> bricks;
    printf("Prefered input?\n1.cout\n2.printf\n:");
    int choice = std::cin.get();

    if (choice == '1')
        io = new IOStream();
    else 
        io = new PrintStream();

    PlasticFactory pFactory;
    ClayFactory cFactory;

    std::vector<Brick*> b;
    b = pFactory.getBrick(10);
    for(auto&e : b)
        bricks.push_back(new BrickHandler(&(*e)));
    
    for(auto& e: bricks)
            io->draw(e->operator->()->outputBrick());

    for(auto& e: bricks)
            delete e;


    delete io;
}