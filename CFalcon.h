#ifndef _CFALCON_H_
#define _CFALCON_H_

#include "IFordCar.h"

namespace Ford {

class CFalcon : public IFordCar {
public:
    std::string GetModel() {
        return std::string("Falcon");
    }
};

}

#endif
