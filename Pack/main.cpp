#include <iostream>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
    Adress sender("Milena", "Sofia", "Obzor 87");
    Adress recipient("Elshan", "Haskovo", "Chuchuliga 36");
    double packageWeight = 100;
    double packageCostPerOunce = 5;

    TwoDayPackage twoDayPackageService(sender,
        recipient,
        packageWeight,
        packageCostPerOunce, 10);

    std::cout << "Two day package service cost : " <<
        twoDayPackageService.CalculateCost() << std::endl;

    OvernightPackage overnightPackageService(sender,
        recipient,
        packageWeight,
        packageCostPerOunce, 5);

    std::cout << "Overnight package service cost : " <<
        overnightPackageService.CalculateCost() << std::endl;

    return 0;

};