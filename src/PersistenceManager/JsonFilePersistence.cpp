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


JsonFilePersistence::JsonFilePersistence(const std::string& settingsFileName_, const std::string& accountingDataFileName_, const std::string& balanceFileName_)
    : settingsFileName(settingsFileName_)
    , accountingDataFileName(accountingDataFileName_)
    , balanceFileName(balanceFileName_)
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
    
    void to_json(json& j, const Settings& p)
    {
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

    void from_json(const json& j, Settings& p)
    {
        
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
    
    void to_json(json& j, const AccountingData& p)
    {
        
        int syrupEmount = p.syrups.size();
        json ad;
        
        ad["moneyIn"] = p.moneyIn;
        ad["moneyOut"] = p.moneyOut;
        ad["water"] = p.water;
        ad["cups"] = p.cups;
        ad["syrupsEmount"] = syrupEmount;

        for (auto it = p.syrups.begin(); it != p.syrups.end(); ++it)
        {
            ad["syrups"][std::to_string(it->first)] = it->second;
        }
        
        j = ad;
    }

    void from_json(const json& j, AccountingData& p)
    {
        
        int syrupEmount;
        
        if (j.find("moneyIn") != j.end())
        {
            p.moneyIn = j["moneyIn"].get<int>();
        }
        else
        {
            p.moneyIn = 0;
        }
        
        if (j.find("moneyOut") != j.end())
        {
            p.moneyOut= j["moneyOut"].get<int>();
        }
        else
        {
            p.moneyOut = 0;
        }
        
        if (j.find("water") != j.end())
        {
            p.water= j["water"].get<int>();
        }
        else
        {
            p.water = 0;
        }
        
        if (j.find("cups") != j.end())
        {
            p.cups= j["cups"].get<int>();
        }
        else
        {
            p.cups = 0;
        }
        
        
        if (j.find("syrupsEmount") != j.end())
        {
            syrupEmount = j["syrupsEmount"].get<int>();
        }
        else
        {
            syrupEmount = 0;
        }
        
        for (int a = 1; a <= syrupEmount; a++)
        {
            if (j.find("syrups") != j.end())
            {
                p.syrups.insert (pair<int,int>(a, j["syrups"].value(std::to_string(a), 0)));
            }
            else
            {
                p.syrups.insert (pair<int,int>(a, 0));
            }
        }
    }

}

bool JsonFilePersistence::readBalance(Balance& s)
{
    json j;
    std::ifstream input_file(balanceFileName);
    try{
        j = json::parse(input_file);
    } catch (...) {
        j = json({});
    }
    s = j;
}

bool JsonFilePersistence::saveBalance(const Balance& s)
{
    std::ofstream output_file(balanceFileName);
    json j_out = s;
    output_file << std::setw(4) << j_out;
}

namespace settingstypes {
    
    void to_json(json& j, const Balance& p)
    {
        
        int syrupEmount = p.syrups.size();
        json ad;
        
        ad["money"] = p.money;
        ad["water"] = p.water;
        ad["cups"] = p.cups;

        ad["syrupsEmount"] = syrupEmount;

        for (auto it = p.syrups.begin(); it != p.syrups.end(); ++it)
        {
            ad["syrups"][std::to_string(it->first)] = it->second;
        }
        
        j = ad;
    }

    void from_json(const json& j, Balance& p)
    {
        
        int syrupEmount;
        
        if (j.find("money") != j.end())
        {
            p.money = j["money"].get<int>();
        }
        else
        {
            p.money = 0;
        }
        
        if (j.find("water") != j.end())
        {
            p.water = j["water"].get<int>();
        }
        else
        {
            p.water = 0;
        }
        
        if (j.find("cups") != j.end())
        {
            p.cups = j["cups"].get<int>();
        }
        else
        {
            p.cups = 0;
        }
        
        if (j.find("syrupsEmount") != j.end())
        {
            syrupEmount = j["syrupsEmount"].get<int>();
        }
        else
        {
            syrupEmount = 0;
        }
        
        for (int a = 1; a <= syrupEmount; a++)
        {
            if (j.find("syrups") != j.end())
            {
                p.syrups.insert (pair<int,int>(a, j["syrups"].value(std::to_string(a), 0)));
            }
            else
            {
                p.syrups.insert (pair<int,int>(a, 0));
            }
        }
    }
}