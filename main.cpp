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

using namespace myjsonns;
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::ifstream i("test.json");
    json j = json::parse(i);
    
    std::cout << std::setw(4) << j << std::endl;
    
    myjsonns::settings_t settings = j;
    
    printSettings(settings);
    
    std::ofstream o("test1.json");
    json j_out = settings;
    o << std::setw(4) << j_out;

    Machine* machine = new Machine();
    machine->connect();

    delete machine;

    return 0;
}

