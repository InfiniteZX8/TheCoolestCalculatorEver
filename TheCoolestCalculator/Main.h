#pragma once
#include "wx/wx.h"
class Main : public wxFrame
{
public:
	Main();
	~Main();
	void OnButtonClicked(wxCommandEvent &_evt);

public:
	wxDECLARE_EVENT_TABLE();
	wxTextCtrl* coolTextBox = nullptr;
	wxButton* coolButtonHex = nullptr;
	wxButton* coolButtonDec = nullptr;
	wxButton* coolButtonBin = nullptr;
	wxButton* coolButtonMod = nullptr;
	wxButton* coolButtonClear = nullptr;
	wxButton* coolButton0 = nullptr;
	wxButton* coolButton4 = nullptr;
	wxButton* coolButton8 = nullptr;
	wxButton* coolButtonNegate = nullptr;
	wxButton* coolButton1 = nullptr;
	wxButton* coolButton5 = nullptr;
	wxButton* coolButton9 = nullptr;
	wxButton* coolButtonStar = nullptr;
	wxButton* coolButton2 = nullptr;
	wxButton* coolButton6 = nullptr;
	wxButton* coolButtonPlus = nullptr;
	wxButton* coolButtonMinus = nullptr;
	wxButton* coolButton3 = nullptr;
	wxButton* coolButton7 = nullptr;
	wxButton* coolButtonEquals = nullptr;
	wxButton* coolButtonDivide = nullptr;

	wxButton** buttons;
};