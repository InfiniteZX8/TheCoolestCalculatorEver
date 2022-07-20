#include "CalcProcessor.h"
#include <string.h>

CalcProcessor* CalcProcessor::_processor = nullptr;

int CalcProcessor::CoolResult(int _num1, int _num2, char op_c) {
	int result = 0;
	switch (op_c) {
	case '+':{
		result = _num1 + _num2;
		break;
			}
	case '-': {
		result = _num1 - _num2;
		break;
	}
	case '*': {
		result = _num1 * _num2;
		break;
	}
	case '/': {
		result = _num1 / _num2;
		break;
	}
	case '%': {
		result = _num1 % _num2;
		break;
	}
	}
	return result;
};

int CalcProcessor::CoolNegation(int _num) {
	return _num * (-1);
};

std::string CalcProcessor::ToBin(int _num) {
	std::string bin = "";
	for (int i = 0; i < 16; i++) {
		bin = std::to_string(_num % 2) + bin;
		_num = _num / 2;
	}
	return bin;
}

std::string CalcProcessor::ToHex(int _num) {
	std::string results = "";

	while (_num > 0) {
		int remainder = _num % 16;
		if (remainder < 10) {
			results = std::to_string(remainder) + results;
		}
		else if (remainder == 10) {
			results = "A" + remainder;
		}
		else if (remainder == 11) {
			results = "B" + remainder;
		}
		else if (remainder == 12) {
			results = "C" + remainder;
		}
		else if (remainder == 13) {
			results = "D" + remainder;
		}
		else if (remainder == 14) {
			results = "E" + remainder;
		}
		else if (remainder == 15) {
			results = "F" + remainder;
		}
		_num = _num / 16;
	}
	return "0x" + results;
};

