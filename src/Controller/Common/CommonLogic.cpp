#include "CommonLogic.hpp"
#include "../ApplicationController.hpp"

CommonLogic::CommonLogic()
    : name("Common Logic string")
{
    std::cout<< "CommonLogic constructor" << std::endl;
}

CommonLogic::~CommonLogic()
{
    std::cout<< "CommonLogic destructor" << std::endl;
}

std::string CommonLogic::getName()
{
    return name;
}