/* 
 * File:   CommonSM.hpp
 * Author: vitalii
 *
 * Created on July 2, 2018, 1:23 AM
 */

#pragma once

#include <boost/statechart/state_machine.hpp>
#include <boost/statechart/simple_state.hpp>
#include <boost/context/all.hpp>
#include <boost/statechart/state.hpp>

//#include "../CommonLogic.hpp"

#include <iostream>

struct Idle;
    
namespace sc = boost::statechart;

struct CommonSM : sc::state_machine<CommonSM, Idle>
{
    CommonSM(/*CommonLogic& logic*/);
    ~CommonSM();

    //CommonLogic& logic();

private:
    //CommonLogic& m_logic;
};
