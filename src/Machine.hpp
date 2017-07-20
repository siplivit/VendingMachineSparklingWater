/* 
 * File:   Machine.hpp
 * Author: Vitaliy
 *
 * Created on July 20, 2017, 4:07 PM
 */

#ifndef MACHINE_HPP
#define MACHINE_HPP

#include <iostream>

#include "MachineStates/LoadingState.hpp"

class VMState;
class LoadingState;
class SaleReadyState;
class CupDispenser;

class Machine {
    friend class VMState;
private:
    VMState* state;
protected:
    CupDispenser* pCupdispenser;
    
    
public:
    class NotSupported : public std::exception {  };
    
    Machine() : state( LoadingState::getInstance() ) {
    }
    void connect() {
        state->connect( this );
    }

    void disconnect() {
        state->disconnect( this );
    }

    void start() {
        state->start( this );
    }

    void stop() {
        state->stop( this );
    }
    
    void changeState( VMState* newState) {
        state = newState;
    }
    
    ~Machine(){
        try {
            stop();
        } catch( const NotSupported& e ) {
            // Exception handling
            std::cout << "Exeption in connect destructor" << std::endl;
            
        } catch( ... ) {
            // Exception handling
            
        }
    }
};

#endif /* MACHINE_HPP */

