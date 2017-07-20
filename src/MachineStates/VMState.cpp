/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* example from http://itnotesblog.ru/note.php?id=221#sthash.JfFeps22.dpbs */

#include "VMState.hpp"
#include "LoadingState.hpp"
#include "../Machine.hpp"


    void VMState::stop( Machine* m ) {
        m->changeState( LoadingState::getInstance() );
    }