/* 
 * File:   VMState.hpp
 * Author: vsiplichuk <vsiplichuk at atncorp.com>
 *
 * Created on July 20, 2017, 4:11 PM
 */

#ifndef VMSTATE_HPP
#define VMSTATE_HPP

#include <iostream>

#define DECLARE_GET_INSTANCE( ClassName ) \
    static ClassName* getInstance() {\
        static ClassName instance;\
        return &instance;\
    }

class LoadingState;
class Machine;

class VMState {
protected:
    void changeState( Machine*, VMState* );
public:
    class NotSupported : public std::exception { };
    
    virtual void connect( Machine* m ) {
        throw NotSupported();
    }

    virtual void disconnect( Machine* m ) {
        throw NotSupported();
    }

    virtual void start( Machine* m ) {
        throw NotSupported();
    }

    virtual void stop( Machine* m );
    
    virtual ~VMState() { }
};

#endif /* VMSTATE_HPP */

