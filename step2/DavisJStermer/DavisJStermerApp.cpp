/**
 * @file DavisJStermerApp.cpp
 * @author davis_stermer
 */

#include <MainFrame.h>
#include "DavisJStermerApp.h"
#include "pch.h"

bool DavisJStermerApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    auto frame = new MainFrame();
    frame->Initialize();
    frame->Show(true);

    return true;
}

#include "DavisJStermerApp.h"
