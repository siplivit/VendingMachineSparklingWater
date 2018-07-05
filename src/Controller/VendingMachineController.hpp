/* 
 * File:   VendingMachineController.hpp
 * Author: vitalii
 *
 * Created on July 2, 2018, 2:39 AM
 */

#pragma once

#include "Common/sm/events/Events.hpp"
#include "Common/sm/CommonSM.hpp"
#include <iostream>

class VendingMachineController
{
public:
    VendingMachineController(/*std::shared_ptr<CommonLogic>*/);
    ~VendingMachineController();
    
    void onTestEvent();
    
    CommonSM m_stateMachine;
    //std::shared_ptr<CommonLogic> m_logic;
};
