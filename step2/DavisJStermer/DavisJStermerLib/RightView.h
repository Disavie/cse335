/**
 * @file RightView.h
 * @author davisstermer
 *
 *
 */

#ifndef DJS_RIGHTVIEW_H
#define DJS_RIGHTVIEW_H

/**
 * View class for our app
 */
class RightView : public wxWindow{
public:
    /**
    * Initialize the aquarium view class.
    * @param parent The parent window for this class
    */
    void Initialize(wxFrame* parent);
    /**
     *
     * @param event Paint event object
     */
    void OnPaint(wxPaintEvent& event);
};


#endif //DJS_RIGHTVIEW_H