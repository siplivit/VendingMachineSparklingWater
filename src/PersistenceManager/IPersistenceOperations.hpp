/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IPersistenceOperations.hpp
 * Author: vitalii
 *
 * Created on December 19, 2018, 10:23 AM
 */

#ifndef IPERSISTENCEOPERATIONS_HPP
#define IPERSISTENCEOPERATIONS_HPP

#include "../Types/Settings.hpp"

using namespace settingstypes;

class IPersistenceOperations
{
public:
    virtual bool readSettings(Settings& s) = 0;
    virtual bool saveSettings(const Settings& s) = 0;
    
    virtual ~IPersistenceOperations(){}
};


#endif /* IPERSISTENCEOPERATIONS_HPP */

