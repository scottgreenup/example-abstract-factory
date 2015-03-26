#ifndef _ICARFACTORY_H_
#define _ICARFACTORY_H_

#include "ICar.h"

class ICarFactory {
public:
    virtual ICar* GetRacingCar() = 0;
    virtual ICar* GetSedan() = 0;
    virtual ICar* GetHatch() = 0;
};

#endif
