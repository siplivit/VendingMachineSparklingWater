/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Syrup.hpp
 * Author: vitaliy
 *
 * Created on July 20, 2017, 1:29 AM
 */

#ifndef SYRUP_HPP
#define SYRUP_HPP

#include <string>

class Syrup {
private:
protected:
    int syrupID;
    std::string name;
public:
    Syrup(int _sID,std::string str): syrupID(_sID), name(str){}
    
    int setSyrupID(int _sID){ syrupID = _sID; }
    int getSyrupID(void){ return syrupID; }
    int setName(std::string str) { name = str; }
    std::string& getName(void) { return name; }
    
    virtual ~Syrup(){}
};

#endif /* SYRUP_HPP */

