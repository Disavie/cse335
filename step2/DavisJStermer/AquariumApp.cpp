/**
 * @file AquariumApp.cpp
 * @author davis_stermer
 */

#include <MainFrame.h>
#include "AquariumApp.h"
#include "pch.h"

bool AquariumApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    auto frame = new MainFrame();
    frame->Initialize();
    frame->Show(true);

    return true;
}

#include "AquariumApp.h"