#include "Idle.hpp"


Idle::Idle(my_context ctx)
    : sc::state<Idle, CommonSM, Loading>(ctx)
    //, logic(outermost_context().logic())
{
    std::cout<< "Idle constructor" << std::endl;
}



Loading::Loading(my_context ctx)
    : sc::state<Loading, Idle>(ctx)
    //, logic(outermost_context().logic())
{
    std::cout<< "Loading constructor" << std::endl;
}



SystemReady::SystemReady(my_context ctx)
    : sc::state<SystemReady, Idle>(ctx)
    //, logic(outermost_context().logic())
{
    std::cout<< "SystemReady constructor" << std::endl;
}




boost::statechart::result Loading::react(const EvLoadingComplete &event)
{
    std::cout << "Transition from Initial to Ready state" << std::endl;

    return transit <SystemReady>();
}

boost::statechart::result SystemReady::react(const EvReadyForSelling &event)
{
    std::cout << "EvReadyForSelling and discard event" << std::endl;

    return discard_event();
}





Idle::~Idle()
{
    std::cout<< "Idle destructor" << std::endl;
}

Loading::~Loading()
{
    std::cout<< "Loading destructor" << std::endl;
}

SystemReady::~SystemReady()
{
    std::cout<< "SystemReady destructor" << std::endl;
}
