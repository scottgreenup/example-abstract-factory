#ifndef _CHOLDENCARFACTORY_H_
#define _CHOLDENCARFACTORY_H_

#include "ICarFactory.h"

#include "CBarina.h"
#include "CCommodore.h"
#include "CMonaro.h"

class CHoldenCarFactory : public ICarFactory {
public:
    ICar* GetRacingCar() {
        return (ICar*)(new Holden::CMonaro());
    }

    ICar* GetSedan() {
        return (ICar*)(new Holden::CCommodore());
    }

    ICar* GetHatch() {
        return (ICar*)(new Holden::CBarina());
    }
};

#endif
