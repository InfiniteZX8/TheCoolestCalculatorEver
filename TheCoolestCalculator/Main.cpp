#include "Main.h"
#include "buttonFactory.h"
#include "CalcProcessor.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

std::string xnumbers;

bool _opWasPressed = true;
bool _equalWasPressed = false;
bool _isBin = false;
bool _isHex = false;
bool _isDec = true;
char op;
int num1, num2, result;

Main::Main() : wxFrame(nullptr, wxID_ANY, "The Coolest Calculator Ever Made", wxPoint(30, 30), wxSize(500, 700)) {

	buttonFactory CoolFactory;

	num1 = 0; num2 = 0;

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
	delete [] buttons;
}

void Main::OnButtonClicked(wxCommandEvent &_evt) {	
	int coolAction = _evt.GetId();
		switch (coolAction){

		case 10000:{
			
			if (_equalWasPressed) {

				coolTextBox->Clear();
				
				_equalWasPressed = false;
				
				xnumbers = "";
			}
			*coolTextBox << "0";
			xnumbers += "0";
			break;}
		case 10001:{
			
			if (_equalWasPressed) {

				coolTextBox->Clear();

				_equalWasPressed = false;

				xnumbers = "";
			}*coolTextBox << "1";
			xnumbers += "1";
			break;}
		case 10002:{
			
			if (_equalWasPressed) {

				coolTextBox->Clear();

				_equalWasPressed = false;

				xnumbers = "";
			}*coolTextBox << "2";
			xnumbers += "2";
			break;}
		case 10003: {
			
			if (_equalWasPressed) {

				coolTextBox->Clear();

				_equalWasPressed = false;

				xnumbers = "";
			}*coolTextBox << "3";
			xnumbers += "3";
			break; }
		case 10004: {
			
			if (_equalWasPressed) {

				coolTextBox->Clear();

				_equalWasPressed = false;

				xnumbers = "";
			}*coolTextBox << "4";
			xnumbers += "4";
			break; }
		case 10005:{
			
			if (_equalWasPressed) {

				coolTextBox->Clear();

				_equalWasPressed = false;

				xnumbers = "";
			}
			*coolTextBox << "5";
			xnumbers += "5";
			break;}
		case 10006: {
			
			if (_equalWasPressed) {

				coolTextBox->Clear();

				_equalWasPressed = false;

				xnumbers = "";
			}
			*coolTextBox << "6";
			xnumbers += "6";
			break; }
		case 10007: {
			
			if (_equalWasPressed) {

				coolTextBox->Clear();

				_equalWasPressed = false;
				
			}
			*coolTextBox << "7";
			xnumbers += "7";
			break; }
		case 10008: {
			
			if (_equalWasPressed) {

				coolTextBox->Clear();

				_equalWasPressed = false;

			}
			*coolTextBox << "8";
			xnumbers += "8";
			break; }
		case 10009: {
				
				if (_equalWasPressed) {

					coolTextBox->Clear();

					_equalWasPressed = false;

				}
				*coolTextBox << "9";
				xnumbers += "9";
				break; 
		}
		case 10010: {//DEC
			
			if (!_isDec && _isBin){

			coolTextBox->Clear();

			*coolTextBox << xnumbers;

			_isDec = true;
			_isBin = false;
			_opWasPressed = true;
			}
			else if (!_isDec && _isHex) {
				coolTextBox->Clear();

				*coolTextBox << xnumbers;

				_isDec = true;
				_isHex = false;
				_opWasPressed = true;
			}

			break; }
		case 10011: {//HEX
			if (!_isHex && xnumbers.length() != 0) {
				coolTextBox->Clear();

				num1 = stoi(xnumbers);
				std::string isHex = CalcProcessor::GetInstance()->ToHex(num1);

				*coolTextBox << isHex;

				_isHex = true;
				_isDec = false;
				_opWasPressed = false;
			}
			else if (!_isDec && _isHex) {
				coolTextBox->Clear();

				*coolTextBox << "NUMBER WAS ALREADY HEXADECIMAL, CLEAR OR CONVERT TO HEX";

				_opWasPressed = false;
			}
			break; }
		case 10012: { //BIN
				
			if (!_isBin && xnumbers.length() != 0) {
				
				coolTextBox->Clear();

				num1 = stoi(xnumbers);
				std::string isBin = CalcProcessor::GetInstance()->ToBin(num1);

				*coolTextBox << isBin;

				_isBin = true;
				_isDec = false;
				_opWasPressed = false;
			}
			else if (!_isDec && _isBin) {
				coolTextBox->Clear();

				*coolTextBox << "NUMBER WAS ALREADY BINARY, CLEAR OR CONVERT TO DEC";

				_opWasPressed = true;
			}
			break; }
		case 10013: {// MOD or %
			if (_opWasPressed && xnumbers.length() != 0) {
				num1 = stoi(xnumbers);

				op = '%';

				coolTextBox->Clear();

				xnumbers = "";

				_opWasPressed = false;
			}
			break; }
		case 10014: {
			coolTextBox->Clear();
			num1 = 0;
			num2 = 0;
			op = NULL;
			xnumbers = "";
			_opWasPressed = true;
			_equalWasPressed = false;
			_isBin = false;
			_isHex = false;
			break; }
		case 10015: {//(-)
			int temp = stoi(xnumbers);
			temp = CalcProcessor::GetInstance()->CoolNegation(temp);
			xnumbers = std::to_string(temp);
			coolTextBox->Clear();
			*coolTextBox << xnumbers;
			break; }
		case 10016:{//*
			if (_opWasPressed && xnumbers.length() != 0) {
				num1 = stoi(xnumbers);

				op = '*';

				coolTextBox->Clear();

				xnumbers = "";

				_opWasPressed = false;
			}
			break; }
		case 10017: { //+
			if (_opWasPressed && xnumbers.length() != 0) {
				num1 = stoi(xnumbers);

				op = '+';

				coolTextBox->Clear();

				xnumbers = "";

				_opWasPressed = false;
			}
			
			break; }
		case 10018: {//-
			if (_opWasPressed && xnumbers.length() != 0) {
				num1 = stoi(xnumbers);

				op = '-';

				coolTextBox->Clear();

				xnumbers = "";

				_opWasPressed = false;
			}
			break; }
		case 10019: {// =

			if (!_opWasPressed && xnumbers.length() != 0) {

				coolTextBox->Clear();

				_equalWasPressed = true;

				num2 = stoi(xnumbers);

				result = CalcProcessor::GetInstance()->CoolResult(num1, num2, op);

				*coolTextBox << result;

				_opWasPressed = true;

				break;
			}
			 }
		case 10020: {//     /
			if (_opWasPressed && xnumbers.length() != 0) {
				num1 = stoi(xnumbers);

				op = '/';

				coolTextBox->Clear();

				xnumbers = "";

				_opWasPressed = false;
			}
			break; }
		}
	
	
}