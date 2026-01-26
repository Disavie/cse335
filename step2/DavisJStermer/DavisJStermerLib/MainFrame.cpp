/**
 * @file MainFrame.cpp
 * @author davis
 */
#include "pch.h"
#include "MainFrame.h"
#include "RightView.h"
#include "LeftView.h"


void MainFrame::Initialize()
{
    Create(nullptr, wxID_ANY, L"Davis J Stermer", wxDefaultPosition,  wxSize( 1000,800 ));

    // Create a sizer that will lay out child windows vertically
    // one above each other
    auto sizer = new wxBoxSizer( wxHORIZONTAL );

    // Create the view class object as a child of MainFrame
    auto leftView = new LeftView();
    leftView->Initialize(this);

    // Create the view class object as a child of MainFrame
    auto rightView = new RightView();
    rightView->Initialize(this);

    // Add it to the sizer
    sizer->Add(leftView,25, wxEXPAND | wxALL );
    sizer->Add(rightView,75, wxEXPAND | wxALL );

    // Set the sizer for this frame
    SetSizer( sizer );

    // Layout (place) the child windows.
    Layout();

}