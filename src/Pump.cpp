#include "Pump.hpp"
#include <stdlib.h>


Pump::Pump(int cID, int pID, std::string str, int st, int flr) {
    classID = cID;
    pumpID = pID;
    className = str;
    state = st;
    flowRate = flr; 
}

Pump::~Pump() {
    
}