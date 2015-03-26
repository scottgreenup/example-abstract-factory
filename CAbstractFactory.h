#ifndef _CABSTRACTFACTORY_H_
#define _CABSTRACTFACTORY_H_

#include "ICarFactory.h"

#include "CHoldenCarFactory.h"

class CAbstractFactory {

public:
    ICarFactory* GetCarFactory() {
        return (ICarFactory*)(new CHoldenCarFactory());
    }
};

#endif
