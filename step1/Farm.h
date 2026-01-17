/**
 * @file Farm.h
 * @author davisstermer
 *
 * Class that describes a farm
 * This class holds a collection of animals that make
 * up the inventory of a farm.
 */

#ifndef STEP1_FARM_H
#define STEP1_FARM_H

#include <vector>
#include <iostream>
#include "Animal.h"
/**
 * Class that describes a farm.
 *
 * Holds a collection of animals that make up the farm
 * inventory.
 */

class Farm
{
private:
 /// A list with the inventory of all animals on the farm
 std::vector<Animal *> mInventory;

public:

 /** Add an animal to the farm inventory.
 *
 * @param  animal to be added to farm
 */
 void AddAnimal(Animal *animal)
 {
  mInventory.push_back(animal);
 }

 /**
  * Display the farm inventory
  */

 void DisplayInventory();


 /**
  * Display farm aggressiveness stats
  */
 void DisplayAggressiveness();

 ~Farm();

};


#endif //STEP1_FARM_H