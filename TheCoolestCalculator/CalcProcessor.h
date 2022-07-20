#pragma once
#include "wx/wx.h"
#include <string.h>

class CalcProcessor
{
private:
	static CalcProcessor* _processor;

	CalcProcessor(){}

public:
	static CalcProcessor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new CalcProcessor;
		}
		return _processor;
	}

	CalcProcessor(CalcProcessor& other) = delete;

	void operator=(CalcProcessor& other) = delete;

	int CoolResult(int _num1, int _num2, char op_c);

	int CoolNegation(int _num);

	std::string ToBin(int _num);

	std::string ToHex(int _num);
};

