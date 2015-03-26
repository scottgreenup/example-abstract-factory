
#include <iostream>

#include "ICar.h"
#include "ICarFactory.h"

#include "CAbstractFactory.h"

int main() {

    CAbstractFactory kAbstractFactory;

    ICarFactory* pkFactory = kAbstractFactory.GetCarFactory();
    ICar* pkRacing = pkFactory->GetRacingCar();

    std::cout << pkRacing->GetMaker() << " " << pkRacing->GetModel() << std::endl;

    return 0;
}

