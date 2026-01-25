/**
 * @file AquariumView.cpp
 * @author davisstermer
 */
#include "pch.h"
#include <wx/dcbuffer.h>
#include "AquariumView.h"


void AquariumView::Initialize(wxFrame* parent)
{
    Create(parent, wxID_ANY);
    SetBackgroundStyle(wxBG_STYLE_PAINT);
    Bind(wxEVT_PAINT, &AquariumView::OnPaint, this);

}


void AquariumView::OnPaint(wxPaintEvent& event)
{
    wxAutoBufferedPaintDC dc(this);

    wxBrush background(*wxWHITE);
    dc.SetBackground(background);
    dc.Clear();

    mAquarium.OnDraw(&dc);
}