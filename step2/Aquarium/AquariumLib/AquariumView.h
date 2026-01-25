/**
 * @file AquariumView.h
 * @author davisstermer
 *
 *
 */

#ifndef AQUARIUM_AQUARIUMVIEW_H
#define AQUARIUM_AQUARIUMVIEW_H

#include "Aquarium.h"
/**
 * View class for our aquarium
 */
class AquariumView : public wxWindow{

private:
    Aquarium  mAquarium;

    /**
    * Paint event, draws the window.
    * @param event Paint event object
    */
    void OnPaint(wxPaintEvent& event);

public:
    /**
    * Initialize the aquarium view class.
    * @param parent The parent window for this class
    */
    void Initialize(wxFrame* parent);

};


#endif //AQUARIUM_AQUARIUMVIEW_H