/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PersistenceManager.hpp
 * Author: vitalii
 *
 * Created on December 19, 2018, 2:25 PM
 */

#ifndef PERSISTENCEMANAGER_HPP
#define PERSISTENCEMANAGER_HPP

#include <memory>


#include "../Types/Settings.hpp"
#include "../Types/AccountingData.hpp"
#include "IPersistenceOperations.hpp"

using namespace std;

class PersistenceManager
{
public:
    
    PersistenceManager(std::unique_ptr<IPersistenceOperations> pers);
    
    bool readSettings(Settings& s);
    bool saveSettings(const Settings& s);
    
    bool readAccountingData(AccountingData& s);
    bool saveAccountingData(const AccountingData& s);
    
    bool readBalance(Balance& s);
    bool saveBalance(const Balance& s);
    
    std::unique_ptr<IPersistenceOperations> persistence;
};


#endif /* PERSISTENCEMANAGER_HPP */

