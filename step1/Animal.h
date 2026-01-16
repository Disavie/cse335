/**
 * @file Animal.h
 * @author davisstermer
 *
 *
 */

#ifndef STEP1_ANIMAL_H
#define STEP1_ANIMAL_H


class Animal
{
private:

public:
    virtual ~Animal();

    /** Display an animal. */
    virtual void DisplayAnimal() {}
    virtual int GetAggro() {return 0;}

};


#endif //STEP1_ANIMAL_H