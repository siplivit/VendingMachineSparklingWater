/* 
 * File:   SaleReady.hpp
 * Author: vsiplichuk <vsiplichuk at atncorp.com>
 *
 * Created on July 20, 2017, 7:14 PM
 */

#ifndef SALEREADY_HPP
#define SALEREADY_HPP

#include <iostream>
#include "VMState.hpp"

class Machine;

class SaleReadyState: public VMState {
protected:
    void changeState( Machine*, VMState* );
public:
    
    DECLARE_GET_INSTANCE( SaleReadyState )
    

    
};

#endif /* SALEREADY_HPP */

