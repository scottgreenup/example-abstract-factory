#ifndef _CBADDGT_H_
#define _CBADDGT_H_

#include "IFordCar.h"

namespace Ford {

class CBaddGT : public IFordCar {
public:
    std::string GetModel() {
        return std::string("Badd GT");
    }
};

}

#endif
