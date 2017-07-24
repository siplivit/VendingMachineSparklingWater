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
        p.settings_general.currency = j["settings_general"]["currency"].get<std::string>();
        p.settings_general.languageID = j["settings_general"]["languageID"].get<int>();
        p.settings_general.products_amount = PRODUCTS_AMOUNT;
        p.cupDisp.cupTubesAmount = j["cupDisp"]["cupTubesAmount"].get<int>();
        p.cupDisp.cupDropTime = j["cupDisp"]["cupDropTime"].get<int>();
        p.cupDisp.cupDropSensorEnableFlg = j["cupDisp"]["cupDropSensorEnableFlg"].get<bool>();
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

