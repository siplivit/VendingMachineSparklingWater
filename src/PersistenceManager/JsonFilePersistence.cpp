/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>

#include "JsonFilePersistence.hpp"


using json = nlohmann::json;

using namespace std;


JsonFilePersistence::JsonFilePersistence(const std::string& settingsFileName_, const std::string& accountingDataFileName_)
    : settingsFileName(settingsFileName_)
    , accountingDataFileName(accountingDataFileName_)
{
    
}

void JsonFilePersistence::setFileName(const std::string s)
{
    settingsFileName = s;
}

std::string JsonFilePersistence::getFileName()
{
    return settingsFileName;
}

bool JsonFilePersistence::readSettings(Settings& s)
{
    json j;
    std::ifstream input_file(settingsFileName);
    try{
        j = json::parse(input_file);
    } catch (...) {
        j = json({});
    }
    s = j;
}

bool JsonFilePersistence::saveSettings(const Settings& s)
{
    std::ofstream output_file(settingsFileName);
    json j_out = s;
    output_file << std::setw(4) << j_out;
}

namespace settingstypes {
    
    void to_json(json& j, const Settings& p) {
        j = json{
            {"settings_general",{
                {"currency", p.settings_general.currency},
                {"languageID", p.settings_general.languageID},
                {"products_amount", p.settings_general.products_amount}}},
            {"cupDisp",{
                {"cupTubesAmount", p.cupDisp.cupTubesAmount},
                {"cupDropTime", p.cupDisp.cupDropTime},
                {"cupDropSensorEnableFlg", p.cupDisp.cupDropSensorEnableFlg}}}
        };
    }

    void from_json(const json& j, Settings& p) {
        
        if (j.find("settings_general") != j.end()) {
            p.settings_general.currency = j["settings_general"].value("currency", CURRENCY_DEFAULT);
            p.settings_general.languageID = j["settings_general"].value("languageID", LANGUAGEID_DEFAULT);
 
        } else {
            p.settings_general.currency = CURRENCY_DEFAULT;
            p.settings_general.languageID = LANGUAGEID_DEFAULT;
        }
        p.settings_general.products_amount = PRODUCTS_AMOUNT;
        
        
        if (j.find("cupDisp") != j.end()) {
            p.cupDisp.cupTubesAmount = j["cupDisp"].value("cupTubesAmount", CUPTUBEAMOUNT_DEFAULT);
            p.cupDisp.cupDropTime = j["cupDisp"].value("cupDropTime", CUPDROPTIME_DEFAULT);
            p.cupDisp.cupDropSensorEnableFlg = j["cupDisp"].value("cupDropSensorEnableFlg", CUPDROPSENSORENABLEFLG_DEFAULT);
 
        } else {
            p.cupDisp.cupTubesAmount = CUPTUBEAMOUNT_DEFAULT;
            p.cupDisp.cupDropTime = CUPDROPTIME_DEFAULT;
            p.cupDisp.cupDropSensorEnableFlg = CUPDROPSENSORENABLEFLG_DEFAULT;
        }
 /*       
        p.settings_general.currency = j["settings_general"]["currency"].get<std::string>();
        p.settings_general.languageID = j["settings_general"]["languageID"].get<int>();
        p.settings_general.products_amount = PRODUCTS_AMOUNT;
        p.cupDisp.cupTubesAmount = j["cupDisp"]["cupTubesAmount"].get<int>();
        p.cupDisp.cupDropTime = j["cupDisp"]["cupDropTime"].get<int>();
        p.cupDisp.cupDropSensorEnableFlg = j["cupDisp"]["cupDropSensorEnableFlg"].get<bool>();
*/       
    }

}

bool JsonFilePersistence::readAccountingData(AccountingData& s)
{
    json j;
    std::ifstream input_file(accountingDataFileName);
    try{
        j = json::parse(input_file);
    } catch (...) {
        j = json({});
    }
    s = j;
}

bool JsonFilePersistence::saveAccountingData(const AccountingData& s)
{
    std::ofstream output_file(accountingDataFileName);
    json j_out = s;
    output_file << std::setw(4) << j_out;
}
      
namespace settingstypes {
    
    void to_json(json& j, const AccountingData& p) {
        j = json{
            {"AccountingData",{
                {"MoneyIn", p.moneyIn},
                {"MoneyOut", p.moneyOut},
                {"Water", p.water},
                {"Cups", p.cups}}}
        };
    }

    void from_json(const json& j, AccountingData& p) {
        
        if (j.find("AccountingData") != j.end())
        {
            p.moneyIn = j["AccountingData"].value("MoneyIn", 0);
            p.moneyOut= j["AccountingData"].value("MoneyOut", 0);
            p.water = j["AccountingData"].value("Water", 0);
            p.cups = j["AccountingData"].value("Cups", 0);
        }
        else
        {
            p.moneyIn = 0;
            p.moneyOut = 0;
            p.water = 0;
            p.cups = 0;
        }
    }

}