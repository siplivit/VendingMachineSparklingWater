/* 
 * File:   CupDispenser.hpp
 * Author: vitaliy
 *
 * Created on July 21, 2017, 1:05 AM
 */

#ifndef CUPDISPENSER_HPP
#define CUPDISPENSER_HPP

class CupDispenser {
private:
    int rotateTubes(void) {}
protected:
    int tubeAmount;
public:
    CupDispenser(): tubeAmount(1) {  }
    
    void setTubeAmount(int ta) { tubeAmount = ta; }
    int getTubeAmount(void) { return this->tubeAmount; }
    
    int dispenseCup(void);
    
    ~CupDispenser() {  }
};

#endif /* CUPDISPENSER_HPP */

