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

/*
 * 
 */
int main(int argc, char** argv) {
    
    json j;

        // add a number that is stored as double (note the implicit conversion of j to an object)
        j["pi"] = 3.141;

        // add a Boolean that is stored as bool
        j["happy"] = true;

        // add a string that is stored as std::string
        j["name"] = "Niels";

        // add another null object by passing nullptr
        j["nothing"] = nullptr;

        // add an object inside the object
        j["answer"]["everything"] = 42;

        // add an array that is stored as std::vector (using an initializer list)
        j["list"] = {1, 0, 2};

        // add another object (using an initializer list of pairs)
        j["object"] = { {"currency", "грн."}, {"value", 42.99} };
     

    /*try {
        std::ifstream i("settings.json");
        i >> j;
    } catch (...) {
        std::cout << "Exeption while settings.json reading" << std::endl;
    }
     */
    if (j["object"].is_object()) {
        string curr;
        json obj = j["object"];
        if (obj.find("currency") != obj.end()) {
            curr = obj["currency"];
            std::cout << "j[object][currency] = " << curr << std::endl;
        }
    }

    // iterate the array
    for (json::iterator it = j.begin(); it != j.end(); ++it) {
        std::cout << *it << std::endl;
    }

    //std::cout << std::setw(4) << j << std::endl;
    //std::cout << "j.size() " << j.size() << std::endl;

    // find an entry
    if (j.find("currency") != j.end()) {
        std::cout << "there is an entry with key currency" << std::endl;
    }

    std::ofstream o("settings.json");
    o << std::setw(4) << j << std::endl;
    
    
    
    
    
    
    Machine* machine = new Machine();
    machine->connect();
    
    delete machine;

    return 0;
}

