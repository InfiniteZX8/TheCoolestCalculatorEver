#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "The Coolest Calculator Ever Made", wxPoint(30, 30), wxSize(500, 700)) {
	coolTextBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(460, 100));
	coolButton = new wxButton(this, wxID_ANY, "HEX", wxPoint(10, 130), wxSize(80, 70));
	coolButton2 = new wxButton(this, wxID_ANY, "DEC", wxPoint(90 + 10, 130), wxSize(80, 70));
	coolButton3 = new wxButton(this, wxID_ANY, "BIN", wxPoint(170 + 20, 130), wxSize(80, 70));
	coolButton4 = new wxButton(this, wxID_ANY, "MOD", wxPoint(250 + 30, 130), wxSize(80, 70));
	coolButton5 = new wxButton(this, wxID_ANY, "C", wxPoint(330 + 40, 130), wxSize(80, 70));
	coolButton6 = new wxButton(this, wxID_ANY, "0", wxPoint(10, 240), wxSize(80, 70));
	coolButton7 = new wxButton(this, wxID_ANY, "4", wxPoint(90 + 10, 240), wxSize(80, 70));
	coolButton8 = new wxButton(this, wxID_ANY, "8", wxPoint(170 + 20, 240), wxSize(80, 70));
	coolButton9 = new wxButton(this, wxID_ANY, "(-)", wxPoint(250 + 30, 240), wxSize(80, 70));
	coolButton10 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 350), wxSize(80, 70));
	coolButton11 = new wxButton(this, wxID_ANY, "5", wxPoint(90 + 10, 350), wxSize(80, 70));
	coolButton12 = new wxButton(this, wxID_ANY, "9", wxPoint(170 + 20, 350), wxSize(80, 70));
	coolButton13 = new wxButton(this, wxID_ANY, "*", wxPoint(250 + 30, 350), wxSize(80, 70));
	coolButton14 = new wxButton(this, wxID_ANY, "2", wxPoint(10, 460), wxSize(80, 70));
	coolButton15 = new wxButton(this, wxID_ANY, "6", wxPoint(90 + 10, 460), wxSize(80, 70));
	coolButton16 = new wxButton(this, wxID_ANY, "+", wxPoint(170 + 20, 460), wxSize(80, 70));
	coolButton17 = new wxButton(this, wxID_ANY, "-", wxPoint(250 + 30, 460), wxSize(80, 70));
	coolButton18 = new wxButton(this, wxID_ANY, "3", wxPoint(10, 570), wxSize(80, 70));
	coolButton19 = new wxButton(this, wxID_ANY, "7", wxPoint(90 + 10, 570), wxSize(80, 70));
	coolButton20 = new wxButton(this, wxID_ANY, "=", wxPoint(170 + 20, 570), wxSize(80, 70));
	coolButton21 = new wxButton(this, wxID_ANY, "/", wxPoint(250 + 30, 570), wxSize(80, 70));
};

Main::~Main() {

}