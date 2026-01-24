/**
* @file AquariumApp.h
 * @author davis_stermer
 */

#ifndef AQUARIUM_AQUARIUMAPP_H
#define AQUARIUM_AQUARIUMAPP_H

/**
 * Main application class
 */
class AquariumApp : public wxApp {
public:
 /**
 * Initialize the application.
 * @return
 */
 bool OnInit() override;
};

#endif //AQUARIUM_AQUARIUMAPP_H