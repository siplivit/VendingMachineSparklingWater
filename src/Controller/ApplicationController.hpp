/* 
 * File:   ApplicationController.hpp
 * Author: vitalii
 *
 * Created on July 2, 2018, 2:39 AM
 */

#pragma once

#include "Common/sm/events/Events.hpp"
#include "Common/sm/CommonSM.hpp"
#include <iostream>

class ApplicationController
{
public:
    ApplicationController();
    ~ApplicationController();
    
    void onTestEvent();
    
    CommonSM m_stateMachine;
};
