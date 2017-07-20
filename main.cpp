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

#include "src/Pump.hpp"
#include "src/SyrupPump.hpp"
#include "src/Machine.hpp"
#include "src/MachineStates/LoadingState.hpp"
#include "src/MachineStates/SaleReadyState.hpp"
#include "src/MachineStates/VMState.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Machine* machine = new Machine();
    machine->connect();
    
    delete machine;

    return 0;
}

