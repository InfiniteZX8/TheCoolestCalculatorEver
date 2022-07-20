#include "wx/wx.h"
#include "CppUnitTest.h"
#include "../TheCoolestCalculator/buttonFactory.h"
#include "../TheCoolestCalculator/CalcProcessor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalcTest
{
	TEST_CLASS(ButtonFacTest)
	{
		buttonFactory* fact = new buttonFactory();
	public:
		wxFrame* coolFrame = new wxFrame(nullptr, wxID_ANY, "The Coolest Calculator Ever Made", wxPoint(30, 30), wxSize(500, 700));
		TEST_METHOD(FacTest1)
		{
			int id = 10000;
			wxButton* zero = fact->CreateButton(coolFrame, 10000);
			Assert::IsTrue((zero->GetId() == id));
		}

		TEST_METHOD(FacTest2) {
			int id = 10001;
			wxButton* one = fact->CreateButton(coolFrame, 10001);
			Assert::IsTrue((one->GetId() == id));
		}

		TEST_METHOD(FacTest3) {
			int id = 10005;
			wxButton* five = fact->CreateButton(coolFrame, 10005);
			Assert::IsTrue((five->GetId() == id));
		}

		TEST_METHOD(FacTest4) {
			int id = 10011;
			wxButton* hex = fact->CreateButton(coolFrame, 10011);
			Assert::IsTrue((hex->GetId() == id));
		}

		TEST_METHOD(FacTest5) {
			int id = 10014;
			wxButton* clear = fact->CreateButton(coolFrame, 10014);
			Assert::IsTrue((clear->GetId() == id));
		}

		TEST_METHOD(FacTest6) {
			int id = 10008;
			wxButton* eight = fact->CreateButton(coolFrame, 10008);
			Assert::IsTrue((eight->GetId() == id));
		}

		TEST_METHOD(FacTest7) {
			int id = 10019;
			wxButton* equals = fact->CreateButton(coolFrame, 10019);
			Assert::IsTrue((equals->GetId() == id));
		}

		TEST_METHOD(FacTest8) {
			int id = 10013;
			wxButton* mod = fact->CreateButton(coolFrame, 10013);
			Assert::IsTrue((mod->GetId() == id));
		}

		TEST_METHOD(FacTest9) {
			int id = 10012;
			wxButton* bin = fact->CreateButton(coolFrame, 10012);
			Assert::IsTrue((bin->GetId() == id));
		}

		TEST_METHOD(FacTest10) {
			int id = 10007;
			wxButton* seven = fact->CreateButton(coolFrame, 10007);
			Assert::IsTrue((seven->GetId() == id));
		}
	};

	TEST_CLASS(ProcessorTest)
	{
	public:
		CalcProcessor* coolProcessor = CalcProcessor::GetInstance();
		TEST_METHOD(ProcTest1)
		{
			int sum = 5;
			int result = coolProcessor->CoolResult(3, 2, '+');
			Assert::IsTrue(sum == result);
		}

		TEST_METHOD(ProcTest2)
		{
			int negativesum = -10;
			int result = coolProcessor->CoolResult(30,40 , '-');
			Assert::IsTrue(negativesum == result);
		}

		TEST_METHOD(ProcTest3)
		{
			int product = 25;
			int result = coolProcessor->CoolResult(5, 5, '*');
			Assert::IsTrue(product = result);
		}

		TEST_METHOD(ProcTest4)
		{
			int division = 40;
			int result = coolProcessor->CoolResult(400, 10, '/');
			Assert::IsTrue(division == result);
		}

		TEST_METHOD(ProcTest5)
		{
			int residuo = 3;
			int result = coolProcessor->CoolResult(10, 7, '%');
			Assert::IsTrue(residuo == result);
		}

		TEST_METHOD(ProcTest6)
		{
			std::string bin = "0000000000001000";
			std::string result = coolProcessor->ToBin(8);
			Assert::IsTrue(bin == result);
		}

		TEST_METHOD(ProcTest7)
		{
			std::string hex = "0x8";
			std::string result = coolProcessor->ToHex(8);
			Assert::IsTrue(hex == result);
		}

		TEST_METHOD(ProcTest8)
		{
			int negate = 10;
			int result = coolProcessor->CoolNegation(-10);
			Assert::IsTrue(negate == result);
		}

		TEST_METHOD(ProcTest9)
		{
			int negate2 = -65;
			int result = coolProcessor->CoolNegation(65);
			Assert::IsTrue(negate2 == result);
		}

		TEST_METHOD(ProcTest10)
		{
			std::string bin2 = "0000000000110000";
			std::string result = coolProcessor->ToBin(48);
			Assert::IsTrue(bin2 == result);
		}
	};
}
