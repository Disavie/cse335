/**
 * @file Farm.cpp
 * @author davis
 */

#include "Farm.h"

/**
 * Farm destructor
 */
Farm::~Farm()
{
    // Iterate over all of the animals, destroying
    // each one.
    for (auto animal : mInventory)
    {
        delete animal;
    }

    // And clear the list
    mInventory.clear();
}

void Farm::DisplayAggressiveness()
{
    float animalCount = 0;
    float totalAggro = 0;
    for (auto animal : mInventory)
    {

        int aggroVal = animal->GetAggro();
        if (aggroVal > 0)
        {
            animalCount++;
        }
        totalAggro += aggroVal;
    }
    //There are 3 aggressive animals on the farm. The average aggressiveness level is 47.6667 aggro units.
    std::cout << "There are " << animalCount << " aggressive animals on the farm. The average aggressiveness level is " << totalAggro/animalCount << " aggro units." << std::endl;
}