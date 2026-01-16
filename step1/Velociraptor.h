/**
 * @file Velociraptor.h
 * @author davisstermer
 *
 *
 */

#ifndef STEP1_VELOCIRAPTOR_H
#define STEP1_VELOCIRAPTOR_H
#include "Animal.h"
#include <string>


class Velociraptor : public Animal
{
private:
    std::string mId;
    int mAggro = 0;
public:
    void ObtainVelociraptorInformation();
    void DisplayAnimal();
    int GetAggro()
    {
        return mAggro;
    };

};


#endif //STEP1_VELOCIRAPTOR_H