#include "LoadingState.hpp"
#include "SaleReadyState.hpp"
#include "../Machine.hpp"

void LoadingState::connect( Machine* m ) {

        m->changeState( SaleReadyState::getInstance() );
}





