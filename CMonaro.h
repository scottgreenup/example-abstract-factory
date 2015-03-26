#ifndef _CMONARO_H_
#define _CMONARO_H_

#include "IHoldenCar.h"

namespace Holden {

class CMonaro : public IHoldenCar {
public:
    std::string GetModel() {
        return std::string("Monaro");
    }
};

}

#endif
