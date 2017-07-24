#include <cstdlib>
#include <iostream>
#include "SettingsManager.hpp"

#include "../libs/json/src/json.hpp"

using json = nlohmann::json;

using namespace myjsonns;
using namespace std;

namespace myjsonns {
    void to_json(json& j, const settings_t& p) {
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

    void from_json(const json& j, settings_t& p) {
        
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

void printSettings(settings_t& s) {
    std::cout << s.settings_general.currency << std::endl;
    std::cout << s.settings_general.languageID << std::endl;
    std::cout << s.settings_general.products_amount << std::endl;
    std::cout << s.cupDisp.cupTubesAmount<< std::endl;
    std::cout << s.cupDisp.cupDropTime<< std::endl;
    std::cout << s.cupDisp.cupDropSensorEnableFlg<< std::endl;
}
}

