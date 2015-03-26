#ifndef _CFORDCARFACTORY_H_
#define _CFORDCARFACTORY_H_

#include "CFalcon.h"
#include "CBaddGT.h"
#include "CFocus.h"

class CFordCarFactory : public ICarFactory {
public:
    ICar* GetRacingCar() {
        return new Ford::CBaddGT();
    }

    ICar* GetSedan() {
        return new Ford::CFalcon();
    }

    ICar* GetHatch() {
        return new Ford::CFocus();
    }
};

#endif
