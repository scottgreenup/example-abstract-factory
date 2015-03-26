#ifndef _CBARINA_H_
#define _CBARINA_H_

#include "IHoldenCar.h"

namespace Holden {

class CBarina : public IHoldenCar {
public:
    std::string GetModel() {
        return std::string("Barina");
    }
};

}

#endif
