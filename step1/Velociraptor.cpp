/**
 * @file Velociraptor.cpp
 * @author davisstermer
 */

#include "Velociraptor.h"
#include <iostream>
using namespace std;

void Velociraptor::ObtainVelociraptorInformation()
{
    cout << endl;
    cout << "Input information about the velociraptor" << endl;

    // Obtain the ID. This is easy, since it's just a
    // string.
    cout << "Name: ";
    cin >> mId;
    cout << "Aggro Factor: ";
    cin >> mAggro;
    while (true)
    {
        /// Check to make sure a nonzero number is provided for the aggro value
        if (mAggro <= 0)
        {
            cout << "A velociraptor is always aggressive to some degree, enter a number greater" << endl;


        }else  if (mAggro > 100)    /// < Check to make sure the aggro value provided is not too large
        {
            cout << "The maximum aggro factor allowed is 100" << endl;
        }else
        {
            break;
        }
        cout << "Aggro Factor: ";
        cin >> mAggro;
    }

}

/**
 * Display the velociraptor.
 */
void Velociraptor::DisplayAnimal()
{
    cout << "Velociraptor " << mId << " has an aggro factor of " << mAggro << " aggro units.\\" << endl;
}