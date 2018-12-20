/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Settings.hpp
 * Author: vitalii
 *
 * Created on December 19, 2018, 10:41 AM
 */

#ifndef SETTINGS_HPP
#define SETTINGS_HPP

#include <vector>


namespace settingstypes {
    
#define MACHINE_MODEL   "Freshmatic 1-65"
#define SERIAL_NUMBER   20170001
#define PRODUCTS_AMOUNT 6   // Model-depended settings (We have only 6 buttons for product selection)
#define SYRUPS_AMOUNT   5   // Model-depended settings (We have only 5 pumps for syrups)
    
    struct SettingsGeneral
    {
        std::string currency;       // Name of currency. For exsample: USD EUR Грн. Руб.
    #define CURRENCY_DEFAULT            "EUR"
        int languageID;
    #define LANGUAGEID_DEFAULT          2
        int products_amount;
    };

    struct SyrupInProduct
    {
        int syrup_ID;
    #define SYRUP_ID_IN_PRODUCTS_DEFAULT        0
        int syrup_amount;                   // ml
    #define SYRUP_AMOUNT_DEFAULT                20
        bool syrupEnableFlg;
    #define SYRUPENABLE_FLG_INPRODUCTS_DEFAULT  true
    };

    struct SettingsProduct
    {
        int productID;
        std::string name;
        int enableFlg;
        int water_amount;       // ml
        std::vector<SyrupInProduct> syrups;
    };

    struct SettingsSyrup
    {
        int syrupID;
    #define SYRUP_ID_INSYRUPS_DEFAULT   0
        std::string name;
    #define SYRUPNAME_DEFAULT           "NO NAME"
        int pumpID;
    #define PUMP_ID_INSYRUPS_DEFAULT    0
    };

    struct CupDisp
    {
        int cupTubesAmount;             // Количество туб со стаканами
    #define CUPTUBEAMOUNT_DEFAULT           6
        int cupDropTime;                // Время падения стакана в с(секундах) (при включённом датчике выдачи стаканов, если за это время стакан не появился - выдать ошибку. При выключенном датчике - задержка перед наливом воды).
    #define  CUPDROPTIME_DEFAULT            10
        bool cupDropSensorEnableFlg;    // Использовать датчик выдачи стаканов
    #define CUPDROPSENSORENABLEFLG_DEFAULT  true
    };

    struct Balance
    {
        int money_balance;              // Сумма принятых денег (баланс: сумма принятых - сумма выданной сдачи)т.е. та сумма, которая висит на экране в качестве принятых денег, коп.
        //int bill_banknote_amount;     // Количество банкнот в купюроприёмнике, шт.
        //int cashBoxCoins_amount;      // Количество монет в CASH BOX
        int water_leftover;             // Остаток воды, мл
        int cups_leftover;              // остаток стаканов, шт.
        int syrup_leftover[5];          // Остаток сиропов, мл
    };

    struct Settings
    {
        SettingsGeneral settings_general;
        CupDisp cupDisp;
    };
    
}
#endif /* SETTINGS_HPP */

