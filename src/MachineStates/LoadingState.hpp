/* 
 * File:   LoadingState.hpp
 * Author: vsiplichuk <vsiplichuk at atncorp.com>
 *
 * Created on July 20, 2017, 5:35 PM
 */

#ifndef LOADINGSTATE_HPP
#define LOADINGSTATE_HPP

#include <iostream>
#include "VMState.hpp"

class Machine;
class SaleReadyState;

class LoadingState: public VMState {
protected:
    void changeState( Machine*, VMState* );
public:
    
    DECLARE_GET_INSTANCE( LoadingState )
    
    void connect( Machine* m );
    
};

#endif /* LOADINGSTATE_HPP */

