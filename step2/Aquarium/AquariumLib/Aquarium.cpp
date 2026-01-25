/**
 * @file Aquarium.cpp
 * @author davis
 */
#include "pch.h"
#include "Aquarium.h"

/**
 * Draw the aquarium
 * @param dc The device context to draw on
 */


Aquarium::Aquarium()
{
    mBackground = std::make_unique<wxBitmap>(
            L"images/background1.png", wxBITMAP_TYPE_ANY);
}
void Aquarium::OnDraw(wxDC *dc)
{
    dc->DrawBitmap(*mBackground, 0, 0);
    wxFont font(wxSize(0, 20),
            wxFONTFAMILY_SWISS,
            wxFONTSTYLE_NORMAL,
            wxFONTWEIGHT_NORMAL);
    dc->SetFont(font);
    dc->SetTextForeground(wxColour(0, 64, 0));
    dc->DrawText(L"Under the Sea!", 10, 10);
}