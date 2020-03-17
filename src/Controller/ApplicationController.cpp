#include "ApplicationController.hpp"

ApplicationController::ApplicationController()
    : m_stateMachine()
{
    std::cout<< "ApplicationController constructor" << std::endl;
}

ApplicationController::~ApplicationController()
{
    std::cout<< "ApplicationController destructor" << std::endl;
}

void ApplicationController::onTestEvent()
{
    std::cout<< "ApplicationController onTestEvent()" << std::endl;
    m_stateMachine.process_event(EvLoadingComplete());
}