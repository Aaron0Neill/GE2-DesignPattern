#pragma once

#include <iostream>
#include <cstdio>
#include <string>

class outputStream
{
public:
    outputStream(){

    }

    virtual ~outputStream(){

    }

    virtual void draw(std::string const&) =0;
private:
};


class IOStream : public outputStream
{
public:
    IOStream(){
        std::cout << "cout stream created\n";
    }

    ~IOStream(){

    }

    virtual void draw(std::string const& string)
    {
        std::cout << string << " ** using cout stream **" << std::endl;
    }
};

class PrintStream : public outputStream
{
public:
    PrintStream(){
        printf("Print stream created\n");
    }

    ~PrintStream(){

    }

    virtual void draw(std::string const& string)
    {
        std::string output = string;
        output += " ** using print stream **";
        printf(output.c_str());
        printf("\n");
    }
private:

};