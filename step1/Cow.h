/**
 * @file Cow.h
 * @author davisstermer
 *
 * Describes animals of type cow
 * Inherits from the Animal class
 */

#ifndef STEP1_COW_H
#define STEP1_COW_H

#include <string>
#include "Animal.h"

///aggro value of all cows
const int CowAggro = 0;
/**
 * Describes animals of type cow
 * Inherits from the Animal class
 *
 */
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
    /**
     * Obtain information about this cow from the user
     */
    void ObtainCowInformation();

    /**
    * Display information about this cow
    */
    void DisplayAnimal();

    /**
     * returns aggro value of a cow
     * @return 0
     */
    int GetAggro()
    {
        return CowAggro;
    };

};


#endif //STEP1_COW_H