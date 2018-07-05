/* 
 * File:   Idle.hpp
 * Author: vitalii
 *
 * Created on July 2, 2018, 2:01 AM
 */

#pragma once

#include "../CommonSM.hpp"
#include "../events/Events.hpp"
#include <boost/statechart/state_machine.hpp>
#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/state.hpp>
#include <boost/context/all.hpp>
#include <boost/statechart/state.hpp>
#include <boost/mpl/list.hpp>
#include <boost/statechart/custom_reaction.hpp>
#include <boost/statechart/transition.hpp>
#include <boost/statechart/event.hpp>


namespace sc = boost::statechart;

struct Loading;


struct Idle : sc::state<Idle, CommonSM, Loading>
{
 public:
     
    Idle(my_context ctx);
    ~Idle();

private:
    //CommonLogic& logic;
};



struct Loading : sc::state<Loading, Idle>
{
 public:
     
    Loading(my_context ctx);
    ~Loading();    

    typedef boost::mpl::list
    <
        sc::custom_reaction<EvLoadingComplete>
    > reactions;

    sc::result react(const EvLoadingComplete & event);

private:
    //CommonLogic& logic;
};



struct SystemReady : sc::state<SystemReady, Idle>
{
public:
    SystemReady(my_context ctx);
    ~SystemReady();

    typedef boost::mpl::list
    <
        sc::custom_reaction<EvReadyForSelling>
    > reactions;

    sc::result react(const EvReadyForSelling & event);

private:
    //CommonLogic& logic;
};