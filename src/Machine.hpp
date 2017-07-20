/* 
 * File:   Machine.hpp
 * Author: vsiplichuk <vsiplichuk at atncorp.com>
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

class Machine {
    friend class VMState;
private:
    VMState* state;
    
public:
    class NotSupported : public std::exception { };
    
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
            
        } catch( ... ) {
            // Exception handling
            
        }
    }
};

#endif /* MACHINE_HPP */

