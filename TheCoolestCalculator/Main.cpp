#include "Main.h"
#include "buttonFactory.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "The Coolest Calculator Ever Made", wxPoint(30, 30), wxSize(500, 700)) {
	buttonFactory CoolFactory;
	buttons = new wxButton * [21];
	coolTextBox = new wxTextCtrl(this, 10069, "", wxPoint(10, 10), wxSize(460, 100));

	coolButtonHex = CoolFactory.CreateButton(this,10011);/*new wxButton(this, 10011, "HEX", wxPoint(10, 130), wxSize(80, 70));*/
	buttons[0] = coolButtonHex;
	coolButtonDec = CoolFactory.CreateButton(this, 10010);/*new wxButton(this, 10010, "DEC", wxPoint(90 + 10, 130), wxSize(80, 70));*/
	buttons[1] = coolButtonDec;
	coolButtonBin = CoolFactory.CreateButton(this, 10012);/*new wxButton(this, 10012, "BIN", wxPoint(170 + 20, 130), wxSize(80, 70));*/
	buttons[2] = coolButtonBin;
	coolButtonMod = CoolFactory.CreateButton(this, 10013);/*new wxButton(this, 10013, "MOD", wxPoint(250 + 30, 130), wxSize(80, 70));*/
	buttons[3] = coolButtonMod;
	coolButtonClear = CoolFactory.CreateButton(this, 10014);/*new wxButton(this, 10014, "C", wxPoint(330 + 40, 130), wxSize(80, 70));*/
	buttons[4] = coolButtonClear;


	coolButton0 = CoolFactory.CreateButton(this, 10000);/* new wxButton(this, 10000, "0", wxPoint(10, 240), wxSize(80, 70));*/
	buttons[5] = coolButton0;
	coolButton4 = CoolFactory.CreateButton(this, 10004);/* new wxButton(this, 10004, "4", wxPoint(90 + 10, 240), wxSize(80, 70));*/
	buttons[6] = coolButton4;
	coolButton8 = CoolFactory.CreateButton(this, 10008); /*new wxButton(this, 10008, "8", wxPoint(170 + 20, 240), wxSize(80, 70));*/
	buttons[7] = coolButton8;
	coolButtonNegate = CoolFactory.CreateButton(this, 10015);/*new wxButton(this, 10015, "(-)", wxPoint(250 + 30, 240), wxSize(80, 70));*/
	buttons[8] = coolButtonNegate;


	coolButton1 = CoolFactory.CreateButton(this, 10001);/*new wxButton(this, 10001, "1", wxPoint(10, 350), wxSize(80, 70));*/
	buttons[9] = coolButton1;
	coolButton5 = CoolFactory.CreateButton(this, 10005);/*new wxButton(this, 10005, "5", wxPoint(90 + 10, 350), wxSize(80, 70));*/
	buttons[10] = coolButton5;
	coolButton9 = CoolFactory.CreateButton(this, 10009);/*new wxButton(this, 10009, "9", wxPoint(170 + 20, 350), wxSize(80, 70));*/
	buttons[11] = coolButton9;
	coolButtonStar = CoolFactory.CreateButton(this, 10016);/*new wxButton(this, 10016, "*", wxPoint(250 + 30, 350), wxSize(80, 70));*/
	buttons[12] = coolButtonStar;


	coolButton2 = CoolFactory.CreateButton(this, 10002);/*new wxButton(this, 10002, "2", wxPoint(10, 460), wxSize(80, 70));*/
	buttons[13] = coolButton2;
	coolButton6 = CoolFactory.CreateButton(this, 10006);/*new wxButton(this, 10006, "6", wxPoint(90 + 10, 460), wxSize(80, 70));*/
	buttons[14] = coolButton6;
	coolButtonPlus = CoolFactory.CreateButton(this, 10017);/*new wxButton(this, 10017, "+", wxPoint(170 + 20, 460), wxSize(80, 70));*/
	buttons[15] = coolButtonPlus;
	coolButtonMinus = CoolFactory.CreateButton(this, 10018);/*new wxButton(this, 10018, "-", wxPoint(250 + 30, 460), wxSize(80, 70));*/
	buttons[16] = coolButtonMinus;


	coolButton3 = CoolFactory.CreateButton(this, 10003);/*new wxButton(this, 10003, "3", wxPoint(10, 570), wxSize(80, 70));*/
	buttons[17] = coolButton3;
	coolButton7 = CoolFactory.CreateButton(this, 10007);/*new wxButton(this, 10007, "7", wxPoint(90 + 10, 570), wxSize(80, 70));*/
	buttons[18] = coolButton7;
	coolButtonEquals = CoolFactory.CreateButton(this, 10019);/*new wxButton(this,10019, "=", wxPoint(170 + 20, 570), wxSize(80, 70));*/
	buttons[19] = coolButtonEquals;
	coolButtonDivide = CoolFactory.CreateButton(this, 10020);/*new wxButton(this,10020, "/", wxPoint(250 + 30, 570), wxSize(80, 70));*/
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
		case 10011: {
			*coolTextBox << "HEX";
			break; }
		case 10012: {
			*coolTextBox << "BIN";
			break; }
		case 10013: {
			*coolTextBox << "MOD";
			break; }
		case 10014: {
			*coolTextBox << "C";
			break; }
		case 10015: {
			*coolTextBox << "(-)";
			break; }
		case 10016:{
			*coolTextBox << "*";
			break; }
		case 10017: {
			*coolTextBox << "+";
			break; }
		case 10018: {
			*coolTextBox << "-";
			break; }
		case 10019: {
			*coolTextBox << "=";
			break; }
		case 10020: {
			*coolTextBox << "/";
			break; }
		}
	
	
}