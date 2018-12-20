/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>

#include "PersistenceManager.hpp"

using namespace std;


PersistenceManager::PersistenceManager(std::unique_ptr<IPersistenceOperations> pers)
    : persistence(std::move(pers))
{

}

bool PersistenceManager::readSettings(Settings& s)
{
    persistence->readSettings(s);
}

bool PersistenceManager::saveSettings(const Settings& s)
{
    persistence->saveSettings(s);
}

bool PersistenceManager::readAccountingData(AccountingData& s)
{
    persistence->readAccountingData(s);
}

bool PersistenceManager::saveAccountingData(const AccountingData& s)
{
    persistence->saveAccountingData(s);
}