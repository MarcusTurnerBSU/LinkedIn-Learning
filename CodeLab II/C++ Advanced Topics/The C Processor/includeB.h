//#ifdef __INCLUDE_A
//#define __INCLUDE_A
//disadvantage to using pragma once can be fooled by symboblic links or files scattered across thefile system
#pragma once

#include "includeA.h"


struct structB {
    int member;
};

//#endif // __INCLUDE_A