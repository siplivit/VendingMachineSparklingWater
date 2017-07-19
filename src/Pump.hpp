/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pump.hpp
 * Author: vitaliy
 *
 * Created on July 20, 2017, 12:34 AM
 */

#ifndef PUMP_HPP
#define PUMP_HPP

#include <string>

#define CLASS_PUMP  0
#define PUMP_OFF    0
#define PUMP_ON     1

class Pump{
protected:
    int classID;
    int pumpID;
    std::string className;
    int state;
    int flowRate;   // ml/min
public:
    //Pump();
    Pump(int = 0, int = 0, std::string s = "", int = 0, int = 0);
    
    virtual int init(void) = 0;
    
    virtual int getClassID() {
        return CLASS_PUMP;
    }
    
    virtual int getPumpID(void){ return pumpID; }
    virtual std::string getClassname() {
        return className;
    }
    
    virtual int pumpStart(void){ state = PUMP_ON; }
    virtual int pumpStop(void){ state = PUMP_OFF; }
    
    virtual ~Pump();
};



#endif /* PUMP_HPP */

