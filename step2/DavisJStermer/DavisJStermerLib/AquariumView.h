/**
 * @file AquariumView.h
 * @author davisstermer
 *
 *
 */

#ifndef AQUARIUM_AQUARIUMVIEW_H
#define AQUARIUM_AQUARIUMVIEW_H

/**
 * View class for our aquarium
 */
class AquariumView : public wxWindow{
public:
    /**
    * Initialize the aquarium view class.
    * @param parent The parent window for this class
    */
    void Initialize(wxFrame* parent);

};


#endif //AQUARIUM_AQUARIUMVIEW_H