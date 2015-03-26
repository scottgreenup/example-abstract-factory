#ifndef _IFORD_H_
#define _IFORD_H_

#include "ICar.h"

namespace Ford {
class IFordCar {
public:
    virtual std::string GetModel() = 0;
    
    virtual std::string GetMaker() {
        return "Ford";
    }
};
}

#endif
