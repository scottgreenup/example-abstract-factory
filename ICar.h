#ifndef _ICAR_H_
#define _ICAR_H_

#include <string>

class ICar {
public:
    virtual std::string GetModel() = 0;
    virtual std::string GetMaker() = 0;
};

#endif
