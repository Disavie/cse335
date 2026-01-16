/**
 * @file Cow.h
 * @author davis
 *
 *
 */

#ifndef STEP1_COW_H
#define STEP1_COW_H

#include <string>

#include "Animal.h"

class Cow : public Animal
{
private:
    /// The types of cow we can have on our farm
    enum class Type {Bull, BeefCow, MilkCow};

    /// The cow's name
    std::string mName;

    /// The type of cow: Bull, BeefCow, or MilkCow
    Type mType =Type::MilkCow;

    /// The milk production for a cow in gallons per day
    double mMilkProduction = 0;
public:
    void ObtainCowInformation();

    /**
    * Display information about this cow
    */
    void DisplayAnimal();
    int GetAggro()
    {
        return 0;
    };

};


#endif //STEP1_COW_H