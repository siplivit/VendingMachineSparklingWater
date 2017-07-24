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
#include "../libs/json/src/json.hpp"

using json = nlohmann::json;

namespace myjsonns {
#define MACHINE_MODEL   "Freshmatic 1-65"
#define SERIAL_NUMBER   20170001
#define PRODUCTS_AMOUNT 6   // Model-depended settings (We have only 6 buttons for product selection)
#define SYRUPS_AMOUNT   5   // Model-depended settings (We have only 5 pumps for syrups)

    enum language {
        ENGLISH,
        UKRAINIAN,
        RUSSIAN,
        LANGUAGE_MAX
    };

    typedef struct machineID_t_ {
        std::string model; // Модель автомата
        std::string serialNumber; // Серийный номер автомата
    } machineID_t;

    typedef struct settings_general_t_ {
        std::string currency; // Name of currency. For exsample: USD EUR Грн. Руб.
#define CURRENCY_DEFAULT    "EUR"
        int languageID; // 
#define LANGUAGEID_DEFAULT  2
        int products_amount;
    } settings_general_t;

    typedef struct syrup_in_product_t_ {
        int syrup_ID;
#define SYRUP_ID_IN_PRODUCTS_DEFAULT    0
        int syrup_amount; // ml
#define SYRUP_AMOUNT_DEFAULT    20
        bool syrupEnableFlg;
#define SYRUPENABLE_FLG_INPRODUCTS_DEFAULT   true
    } syrup_in_product_t;

    typedef struct settings_product_t_ {
        int productID;
        std::string name;
        int enableFlg;
        int water_amount; // ml
        std::vector<syrup_in_product_t> syrups;
    } settings_product_t;

    typedef struct settings_syrup_t_ {
        int syrupID;
#define SYRUP_ID_INSYRUPS_DEFAULT   0
        std::string name;
#define SYRUPNAME_DEFAULT   "NO NAME"
        int pumpID;
#define PUMP_ID_INSYRUPS_DEFAULT    0
    } settings_syrup_t;

    typedef struct cupDisp_t_ {
        int cupTubesAmount; // Количество туб со стаканами
#define CUPTUBEAMOUNT_DEFAULT           6
        int cupDropTime; // Время падения стакана в с(секундах) (при включённом датчике выдачи стаканов, если за это время стакан не появился - выдать ошибку. При выключенном датчике - задержка перед наливом воды).
#define  CUPDROPTIME_DEFAULT            10
        bool cupDropSensorEnableFlg; // Использовать датчик выдачи стаканов
#define CUPDROPSENSORENABLEFLG_DEFAULT  true
    } cupDisp_t;

    typedef struct balance_t_ {
        int money_balance; // Сумма принятых денег (баланс: сумма принятых - сумма выданной сдачи)т.е. та сумма, которая висит на экране в качестве принятых денег, коп.
        //int bill_banknote_amount;   // Количество банкнот в купюроприёмнике, шт.
        //int cashBoxCoins_amount;    // Количество монет в CASH BOX
        int water_leftover; // Остаток воды, мл
        int cups_leftover; // остаток стаканов, шт.
        int syrup_leftover[5]; // Остаток сиропов, мл
    } balance_t;
    
    typedef struct settings_t_ {
        settings_general_t settings_general;
        cupDisp_t cupDisp;
    }settings_t;
}



namespace myjsonns {
    void to_json(json& j, const settings_t& p);
    void from_json(const json& j, settings_t& p);
    void printSettings(settings_t& s);
}



class SettingsManager {
public:
    SettingsManager(){}
    
    int loadSettings(void);
    int saveSettings(void);
    
    ~SettingsManager(){}
};

#endif /* SETTINGSMANAGER_HPP */

