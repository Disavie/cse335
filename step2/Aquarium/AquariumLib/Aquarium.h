/**
 * @file Aquarium.h
 * @author davis
 *
 *
 */

#ifndef AQUARIUM_AQUARIUM_H
#define AQUARIUM_AQUARIUM_H

#include<memory>

class Aquarium
{
private:
    std::unique_ptr<wxBitmap> mBackground;  ///< Background image to use
    /// An object that describes our aquarium
public:
    /**
    * Aquarium Constructor
    */
    Aquarium();
    /**
    * Draw the aquarium
    * @param dc The device context to draw on
    */
    void OnDraw(wxDC *dc);
};


#endif //AQUARIUM_AQUARIUM_H