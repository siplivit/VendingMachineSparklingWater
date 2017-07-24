/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: vitaliy
 *
 * Created on July 20, 2017, 12:27 AM
 */

#include <cstdlib>
#include <fstream>

#include "src/Pump.hpp"
#include "src/SyrupPump.hpp"
#include "src/Machine.hpp"
#include "src/MachineStates/LoadingState.hpp"
#include "src/MachineStates/SaleReadyState.hpp"
#include "src/MachineStates/VMState.hpp"
#include "src/SettingsManager.hpp"

#include "libs/json/src/json.hpp"

using json = nlohmann::json;
using namespace std;

namespace myjsonns {
    void to_json(json& j, const settings_t& p) {
        j = json{{"settings_general/currency", p.settings_general.currency},
        {"settings_general/languageID", p.settings_general.languageID},
        {"settings_general/products_amount", p.settings_general.products_amount},
        {"cupDisp/cupTubesAmount", p.cupDisp.cupTubesAmount},
        {"cupDisp/cupDropTime", p.cupDisp.cupDropTime},
        {"cupDisp/cupDropSensorEnableFlg", p.cupDisp.cupDropSensorEnableFlg}};
    }

    void from_json(const json& j, settings_t& p) {
        p.settings_general.currency = j.at("settings_general/currency").get<std::string>();
        p.settings_general.languageID = j.at("settings_general/languageID").get<int>();
        p.settings_general.products_amount = j.at("settings_general/products_amount").get<int>();
        p.cupDisp.cupTubesAmount = j.at("cupDisp/cupTubesAmount").get<int>();
        p.cupDisp.cupDropTime = j.at("cupDisp/cupDropTime").get<int>();
        p.cupDisp.cupDropSensorEnableFlg = j.at("cupDisp/cupDropSensorEnableFlg").get<bool>();
    }
}

/*
 * 
 */
int main(int argc, char** argv) {

    // read a JSON file
    std::ifstream i("test.json");
    json j;
    i >> j;

    // conversion: json -> settings
    myjsonns::settings_t settings = j;
    
    std::cout << settings.settings_general.currency << std::endl;
    std::cout << settings.settings_general.languageID << std::endl;
    std::cout << settings.settings_general.products_amount << std::endl;
    std::cout << settings.cupDisp.cupTubesAmount<< std::endl;
    std::cout << settings.cupDisp.cupDropTime<< std::endl;
    std::cout << settings.cupDisp.cupDropSensorEnableFlg<< std::endl;
    
    std::ofstream o("test_out.json");
    json j_out = settings;
    o << j_out;

    //std::cout << std::setw(4) << j << std::endl;
    //std::cout << "j.size() " << j.size() << std::endl;

    /*
    // find an entry
    if (j.find("currency") != j.end()) {
        std::cout << "there is an entry with key currency" << std::endl;
    }

    std::ofstream o("settings.json");
    o << std::setw(4) << j << std::endl;
     */

    Machine* machine = new Machine();
    machine->connect();

    delete machine;

    return 0;
}

