/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SettingsManager.hpp
 * Author: vitaliy
 *
 * Created on July 22, 2017, 1:36 AM
 */

#ifndef SETTINGSMANAGER_HPP
#define SETTINGSMANAGER_HPP

#include <vector>

typedef struct settings_general_t_ {
    int currency;   // currency ID
    int products_amount;
    
};

typedef struct settings_product_t_ {
    int productID;
    int products_amount;    // pcs.
    int water_amount;       // ml
    int syrup_amount;       // ml
    std::vector<int> syrup_ID;  // array of syrups if we have several syrups in one product
}settings_product_t;

typedef struct settings_syrup_t_ {
    int syrupID;
    std::string name;
    int PumpID;
}settings_syrup_t;

class SettingsManager {
    
    
    
};

#endif /* SETTINGSMANAGER_HPP */

