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

    /// Uses n lines (n = 30)
    /// Uses n colors

    wxPen pen(*wxBLACK,3);
    dc.SetPen(pen);

    int n = 10;                // number of steps
    int cx = 300;              // center x
    int cy = 300;              // center y
    int r  = 100;              // radius

    double step = 2 * M_PI / n;

    int prevX = cx + r;
    int prevY = cy;

    for (int i = 1; i <= n; i++)
    {
        double angle = i * step;

        int x = cx + static_cast<int>(r * cos(angle));
        int y = cy + static_cast<int>(r * sin(angle));

        dc.DrawLine(prevX, prevY, x, y);

        prevX = x;
        prevY = y;

        wxColour c = pen.GetColour();

        int r = (c.Red()   + 15) % 256;
        int g = (c.Green() + 25) % 256;
        int b = (c.Blue()  + 35) % 256;

        pen.SetColour(wxColour(r, g, b));
        dc.SetPen(pen);
    }

    dc.SetPen(*wxTRANSPARENT_PEN);
    wxBrush brush(*wxCYAN);
    dc.SetBrush(brush);
    dc.DrawRectangle(100, 150, 400, 50);

    pen.SetColour(*wxGREEN);
    dc.SetBrush(*wxTRANSPARENT_BRUSH);
    dc.SetPen(pen);
    dc.DrawRectangle(100,400,400,50);

    pen.SetColour(*wxBLACK);
    dc.SetPen(pen);
    dc.DrawRectangle(100,450,50,100);
    dc.DrawRectangle(450,450,50,100);
    dc.DrawRectangle(100,550,400,50);





}