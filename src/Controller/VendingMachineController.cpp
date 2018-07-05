#include "VendingMachineController.hpp"

VendingMachineController::VendingMachineController(/*std::shared_ptr<CommonLogic> logic*/)
    //: m_logic(logic)
    : m_stateMachine()
{
    std::cout<< "VendingMachineController constructor" << std::endl;
}

VendingMachineController::~VendingMachineController()
{
    std::cout<< "VendingMachineController destructor" << std::endl;
}

void VendingMachineController::onTestEvent()
{
    std::cout<< "VendingMachineController onTestEvent()" << std::endl;
    m_stateMachine.process_event(EvLoadingComplete());
}