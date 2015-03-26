#ifndef _CFOCUS_H_
#define _CFOCUS_H_

#include "IFordCar.h"

namespace Ford {

class CFocus : public IFordCar {
public:
    std::string GetModel() {
        return std::string("Focus");
    }
};

}

#endif
