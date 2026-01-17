/**
 * @file Velociraptor.h
 * @author davisstermer
 *
 * Describes animals of type Velociraptor
 * Inherits from the Animal class
 */

#ifndef STEP1_VELOCIRAPTOR_H
#define STEP1_VELOCIRAPTOR_H
#include "Animal.h"
#include <string>
/**
 * Describes animals of type velociraptor
 * Inherits from the Animal class
 *
 */

class Velociraptor : public Animal
{
private:
    /// Name of this velocirpator
    std::string mId;
    /// Aggro vlue of this velociraptor (aggro units)
    int mAggro = 0;
public:
    /**
     * Obtain information about this velociraptor from the user
     */
    void ObtainVelociraptorInformation();

    /**
    * Display the velociraptor.
    */
    void DisplayAnimal();

    /**
    * Get aggro level of an velociraptor.
    * @return mAggro of velociraptor
    */
    int GetAggro()
    {
        return mAggro;
    };

};


#endif //STEP1_VELOCIRAPTOR_H