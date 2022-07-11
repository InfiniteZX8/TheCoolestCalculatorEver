#include "buttonFactory.h"

wxButton* buttonFactory::CreateButton(wxWindow* parent, wxWindowID i) {

	if (i == 10000) {
		return new wxButton(parent, i, "0", wxPoint(10, 240), wxSize(80, 70));
	}

	else if (i == 10001) {
		return new wxButton(parent, i, "1", wxPoint(10, 350), wxSize(80, 70));
	}

	else if (i == 10002) {
		return new wxButton(parent, i, "2", wxPoint(10, 460), wxSize(80, 70));
	}

	else if (i == 10003) {
		return new wxButton(parent, i, "3", wxPoint(10, 570), wxSize(80, 70));
	}
	
	else if (i == 10004) {
		return new wxButton(parent, i, "4", wxPoint(90 + 10, 240), wxSize(80, 70));
	}

	else if (i == 10005) {
		return new wxButton(parent, i, "5", wxPoint(90 + 10, 350), wxSize(80, 70));
	}

	else if (i == 10006) {
		return new wxButton(parent, i, "6", wxPoint(90 + 10, 460), wxSize(80, 70));
	}

	else if (i == 10007) {
		return new wxButton(parent, i, "7", wxPoint(90 + 10, 570), wxSize(80, 70));
	}

	else if (i == 10008) {
		return new wxButton(parent, i, "8", wxPoint(170 + 20, 240), wxSize(80, 70));
	}

	else if (i == 10009) {
		return new wxButton(parent, i, "9", wxPoint(170 + 20, 350), wxSize(80, 70));
	}

	else if (i == 10010) {
		return new wxButton(parent, i, "DEC", wxPoint(90 + 10, 130), wxSize(80, 70));
	}

	else if (i == 10011) {
		return new wxButton(parent, i, "HEX", wxPoint(10, 130), wxSize(80, 70));
	}

	else if (i == 10012) {
		return new wxButton(parent, i, "BIN", wxPoint(170 + 20, 130), wxSize(80, 70));
	}

	else if (i == 10013) {
		return new wxButton(parent, i, "MOD", wxPoint(250 + 30, 130), wxSize(80, 70));
	}
	
	else if (i == 10014) {
		return new wxButton(parent, i, "C", wxPoint(330 + 40, 130), wxSize(80, 70));
	}

	else if (i == 10015) {
		return new wxButton(parent, i, "(-)", wxPoint(250 + 30, 240), wxSize(80, 70));
	}

	else if (i == 10016) {
		return new wxButton(parent, i, "*", wxPoint(250 + 30, 350), wxSize(80, 70));;
	}

	else if (i == 10017) {
		return new wxButton(parent, i, "+", wxPoint(170 + 20, 460), wxSize(80, 70));
	}

	else if (i == 10018) {
		return new wxButton(parent, i, "-", wxPoint(250 + 30, 460), wxSize(80, 70));
	}

	else if (i == 10019) {
		return new wxButton(parent, i, "=", wxPoint(170 + 20, 570), wxSize(80, 70));
	}

	else if (i == 10020) {

		return new wxButton(parent, i, "/", wxPoint(250 + 30, 570), wxSize(80, 70));
	}

}
