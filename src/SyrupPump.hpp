/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SyrupPump.hpp
 * Author: vitaliy
 *
 * Created on July 20, 2017, 12:57 AM
 */

#ifndef SYRUPPUMP_HPP
#define SYRUPPUMP_HPP

#include "Pump.hpp"

#include <string>

#define CLASS_SYRUPPUMP  1

class SyrupPump: public Pump{
protected:
    int classID;
    int pumpID;
    std::string className;
    int state;
    int flowRate;   // ml/min
public:
    //SyrupPump();
    SyrupPump(int cID, int pID, std::string str, int st, int flr): classID(cID), pumpID(pID), className(str), state(st), flowRate(flr){}
    
    virtual int init(void);
    
    virtual int getClassID() {
        return CLASS_SYRUPPUMP;
    }
    
    virtual int getPumpID(void){ return pumpID; }
    
    virtual std::string getClassname() {
        return className;
    }
    
    virtual int pumpStart(void){ state = PUMP_ON; }
    virtual int pumpStop(void){ state = PUMP_OFF; }
    
    virtual ~SyrupPump(){}
};

#endif /* SYRUPPUMP_HPP */

