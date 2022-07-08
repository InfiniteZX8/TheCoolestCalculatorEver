#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "The Coolest Calculator Ever Made", wxPoint(30, 30), wxSize(500, 700)) {

	buttons = new wxButton * [21];
	coolTextBox = new wxTextCtrl(this, 10069, "", wxPoint(10, 10), wxSize(460, 100));

	coolButtonHex = new wxButton(this, 10016, "HEX", wxPoint(10, 130), wxSize(80, 70));
	buttons[0] = coolButtonHex;
	coolButtonDec = new wxButton(this, 10010, "DEC", wxPoint(90 + 10, 130), wxSize(80, 70));
	buttons[1] = coolButtonDec;
	coolButtonBin = new wxButton(this, 10101, "BIN", wxPoint(170 + 20, 130), wxSize(80, 70));
	buttons[2] = coolButtonBin;
	coolButtonMod = new wxButton(this, 10102, "MOD", wxPoint(250 + 30, 130), wxSize(80, 70));
	buttons[3] = coolButtonMod;
	coolButtonClear = new wxButton(this, 10103, "C", wxPoint(330 + 40, 130), wxSize(80, 70));
	buttons[4] = coolButtonClear;


	coolButton0 = new wxButton(this, 10000, "0", wxPoint(10, 240), wxSize(80, 70));
	buttons[5] = coolButton0;
	coolButton4 = new wxButton(this, 10004, "4", wxPoint(90 + 10, 240), wxSize(80, 70));
	buttons[6] = coolButton4;
	coolButton8 = new wxButton(this, 10008, "8", wxPoint(170 + 20, 240), wxSize(80, 70));
	buttons[7] = coolButton8;
	coolButtonNegate = new wxButton(this, 10104, "(-)", wxPoint(250 + 30, 240), wxSize(80, 70));
	buttons[8] = coolButtonNegate;


	coolButton1 = new wxButton(this, 10001, "1", wxPoint(10, 350), wxSize(80, 70));
	buttons[9] = coolButton1;
	coolButton5 = new wxButton(this, 10005, "5", wxPoint(90 + 10, 350), wxSize(80, 70));
	buttons[10] = coolButton5;
	coolButton9 = new wxButton(this, 10009, "9", wxPoint(170 + 20, 350), wxSize(80, 70));
	buttons[11] = coolButton9;
	coolButtonStar = new wxButton(this, 10105, "*", wxPoint(250 + 30, 350), wxSize(80, 70));
	buttons[12] = coolButtonStar;


	coolButton2 = new wxButton(this, 10002, "2", wxPoint(10, 460), wxSize(80, 70));
	buttons[13] = coolButton2;
	coolButton6 = new wxButton(this, 10006, "6", wxPoint(90 + 10, 460), wxSize(80, 70));
	buttons[14] = coolButton6;
	coolButtonPlus = new wxButton(this, 10106, "+", wxPoint(170 + 20, 460), wxSize(80, 70));
	buttons[15] = coolButtonPlus;
	coolButtonMinus = new wxButton(this, 10107, "-", wxPoint(250 + 30, 460), wxSize(80, 70));
	buttons[16] = coolButtonMinus;


	coolButton3 = new wxButton(this, 10003, "3", wxPoint(10, 570), wxSize(80, 70));
	buttons[17] = coolButton3;
	coolButton7 = new wxButton(this, 10007, "7", wxPoint(90 + 10, 570), wxSize(80, 70));
	buttons[18] = coolButton7;
	coolButtonEquals = new wxButton(this,10108, "=", wxPoint(170 + 20, 570), wxSize(80, 70));
	buttons[19] = coolButtonEquals;
	coolButtonDivide = new wxButton(this,10109, "/", wxPoint(250 + 30, 570), wxSize(80, 70));
	buttons[20] = coolButtonDivide;
	
	for (int i = 0; i < 21; i++) {
		buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	}

};

Main::~Main() {

}

void Main::OnButtonClicked(wxCommandEvent &_evt) {

	int coolAction = _evt.GetId();

		switch (coolAction){

		case 10000:{
			*coolTextBox << "0";
			break;}
		case 10001:{
			*coolTextBox << "1";
			break;}
		case 10002:{
			*coolTextBox << "2";
			break;}
		case 10003: {
			*coolTextBox << "3";
			break; }
		case 10004: {
			*coolTextBox << "4";
			break; }
		case 10005:{
			*coolTextBox << "5";
			break;}
		case 10006: {
			*coolTextBox << "6";
			break; }
		case 10007: {
			*coolTextBox << "7";
			break; }
		case 10008: {
			*coolTextBox << "8";
			break; }
		case 10009: {
			*coolTextBox << "9";
			break; }
		case 10010: {
			*coolTextBox << "DEC";
			break; }
		case 10016: {
			*coolTextBox << "HEX";
			break; }
		case 10101: {
			*coolTextBox << "BIN";
			break; }
		case 10102: {
			*coolTextBox << "MOD";
			break; }
		case 10103: {
			*coolTextBox << "C";
			break; }
		case 10104: {
			*coolTextBox << "(-)";
			break; }
		case 10105: {
			*coolTextBox << "*";
			break; }
		case 10106: {
			*coolTextBox << "+";
			break; }
		case 10107: {
			*coolTextBox << "-";
			break; }
		case 10108: {
			*coolTextBox << "=";
			break; }
		case 10109: {
			*coolTextBox << "/";
			break; }
		}
	
	
}