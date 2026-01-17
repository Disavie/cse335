/**
* @file Chicken.h
 *
 * @author davisstermer
 *
 * Describes animals of type Chicken
 * Inherits from the Animal class
 */

#ifndef STEP1_CHICKEN_H
#define STEP1_CHICKEN_H

#include <string>

#include "Animal.h"

///aggro value of all chickens
const int ChickenAggro = 1;
/**
 * Describes animals of type Chicken
 * Inherits from the Animal class
 */
class Chicken : public Animal
{
private:
    /// The chicken's ID
    std::string mId;

public:
    /**
     * Obtain information about this chicken from the user
     */
    void ObtainChickenInformation();

    /**
    * displayed information about a chicken
    */
    void DisplayAnimal();

    /**
     * returns aggro value of a chicken
     * @return 1
     */
    int GetAggro()
    {
        return ChickenAggro;
    };

};


#endif //STEP1_CHICKEN_H