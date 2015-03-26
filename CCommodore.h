#ifndef _CCOMMODORE_H_
#define _CCOMMODORE_H_

#include "IHoldenCar.h"

namespace Holden {

class CCommodore : public IHoldenCar {
public:
    std::string GetModel() {
        return std::string("Commodore");
    }
};

}

#endif
