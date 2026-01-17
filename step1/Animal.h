/**
 * @file Animal.h
 * @author davisstermer
 *
 * Describes animals of type Animal
 */

#ifndef STEP1_ANIMAL_H
#define STEP1_ANIMAL_H

/**
 * Describes animals of type Animal
 */
class Animal
{
private:

public:
    virtual ~Animal();

    /**
     * Display an animal.
     */
    virtual void DisplayAnimal() {}

    /**
    * Get aggro level of an animal.
    * @return mAggro of animal
    */
    virtual int GetAggro() {return 0;}

};


#endif //STEP1_ANIMAL_H