/**
 * @file Farm.cpp
 * @author davisstermer
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

/**
 * Display the farm inventory
 */
void Farm::DisplayInventory()
{
    for (auto animal : mInventory)
    {
        animal->DisplayAnimal();
    }
}
/**
 * Display the aggressiveness of the farm
 * prints total aggressive animals and average aggressiveness value
 */
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
    std::cout << "There are " << animalCount << " aggressive animals on the farm. The average aggressiveness level is " << totalAggro/animalCount << " aggro units." << std::endl;
}