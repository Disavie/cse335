/**
 * @file RightView.cpp
 * @author davisstermer
 */

#include "pch.h"
#include "RightView.h"
#include <wx/dcbuffer.h>


void RightView::Initialize(wxFrame* parent)
{
    Create(parent, wxID_ANY);
    SetBackgroundStyle(wxBG_STYLE_PAINT);
    Bind(wxEVT_PAINT, &RightView::OnPaint, this);
}

void RightView::OnPaint(wxPaintEvent& event)
{
    wxAutoBufferedPaintDC dc(this);

    wxBrush background(*wxWHITE);
    dc.SetBackground(background);
    dc.Clear();

    std::string text = "Your art must contain at least 10 lines and 5 rectangles. \n At least one rectangle must be un-filled, meaning only the outline is drawn. \n You must use at least four colors";

    // Creates a 20-pixel tall font
    wxFont font(wxSize(0, 20),
            wxFONTFAMILY_SWISS,
            wxFONTSTYLE_NORMAL,
            wxFONTWEIGHT_NORMAL);
    dc.SetFont(font);

    dc.SetTextForeground(wxColour(0, 0, 0));
    dc.DrawText(text,  // Text to draw
            10,     // x coordinate for the left size of the text
            10);    // y coordinate for the top of the text

}