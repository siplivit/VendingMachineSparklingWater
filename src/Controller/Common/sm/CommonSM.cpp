#include "CommonSM.hpp"
#include "states/Idle.hpp"


CommonSM::CommonSM(/*CommonLogic& logic*/)
    //: m_logic(logic)
{
    initiate();
    std::cout<< "CommonSM constructor" << std::endl;
}

CommonSM::~CommonSM()
{
    terminate();
    std::cout<< "CommonSM destructor" << std::endl;
}

//CommonLogic& CommonSM::logic()
//{
//    return m_logic;
//}
