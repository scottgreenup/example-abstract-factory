#ifndef _IFORD_H_
#define _IFORD_H_

#include "ICar.h"

namespace Holden {
class IHoldenCar {
public:
    virtual std::string GetModel() = 0;
    
    virtual std::string GetMaker() {
        return "Holden";
    }
};
}

#endif
