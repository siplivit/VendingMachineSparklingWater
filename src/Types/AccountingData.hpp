/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AccountingData.hpp
 * Author: vitalii
 *
 * Created on December 20, 2018, 5:36 PM
 */

#ifndef ACCOUNTINGDATA_HPP
#define ACCOUNTINGDATA_HPP

#include <map>

using namespace std;

namespace settingstypes {
    
    struct Balance
    {
        int money;                  // Сумма принятых денег (баланс: сумма принятых - сумма выданной сдачи)т.е. та сумма, которая висит на экране в качестве принятых денег, коп.
        int water;                  // Остаток воды, мл
        int cups;                   // остаток стаканов, шт.
        std::map<int, int> syrups;  // Остаток сиропов, мл
    };
    
    struct AccountingData
    {
        int moneyIn;                // Money In, cents
        int moneyOut;               // Money Out, cents
        
        int water;                  // Wasted water, ml
        int cups;                   // wasted cups, pcs
        std::map<int, int> syrups;  // Wasted syrups, ml
    };
}

#endif /* ACCOUNTINGDATA_HPP */

