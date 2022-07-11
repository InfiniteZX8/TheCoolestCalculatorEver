#pragma once
#include "wx/wx.h"

class buttonFactory
{
public:
	wxButton* CreateButton(wxWindow* parent,wxWindowID i);
};

