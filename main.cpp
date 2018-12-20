/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vitalii
 *
 * Created on July 20, 2017, 12:27 AM
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <memory>

//#include <boost/statechart/transition.hpp>
//#include <boost/context/all.hpp>
//#include <boost/statechart/custom_reaction.hpp>

//#include "src/Controller/VendingMachineController.hpp"
//#include "src/practice/list/listclass.hpp"

#include "src/Types/Settings.hpp"
#include "src/PersistenceManager/../PersistenceManager/PersistenceManager.hpp"
#include "src/PersistenceManager/JsonFilePersistence.hpp"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "ru");
    
    Settings mySettings;
    
    PersistenceManager pm(std::make_unique<JsonFilePersistence>("db/settings.json"));
    
    pm.readSettings(mySettings);
    
    mySettings.cupDisp.cupTubesAmount++;
    
    pm.saveSettings(mySettings);
 
    return 0;
}

