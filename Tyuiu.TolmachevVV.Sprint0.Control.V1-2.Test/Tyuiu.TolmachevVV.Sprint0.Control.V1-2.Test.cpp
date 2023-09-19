#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Control.V1-2.Lib/Tyuiu.TolmachevVV.Sprint0.Control.V1-2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0ControlV12Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0ControlV12Test)
	{
	public:
		
		TEST_METHOD(Variant1Zadacha1)
		{
			ISprint0Task8V0* service1 = new ServiceV1();
			int a = 234;
			Assert::AreEqual(24, service1->Control(a));
		}
		TEST_METHOD(Variant1Zadacha2)
		{
			ISprint0Task8V2* service2 = new ServiceV2();
			int a = 2;
			int b = 3;
			int c = 4;
			Assert::AreEqual(5, service2->Rezultat(a, b, c));
		}
		TEST_METHOD(Variant2Zadacha1)
		{
			ISprint0Task8V1* service3 = new ServiceV3();
			int a = 2;
			int b = 3;
			float c = 4.98247;
			Assert::AreEqual(service3->Chislo(a, b), service3->Chislo(a, b));
		}
		TEST_METHOD(Variant2Zadacha2)
		{
			ISprint0Task8V2* service4 = new ServiceV4();
			int a = 2;
			int b = 3;
			int c = 4;
			Assert::AreEqual(0, service4->Rezultat(a, b, c));
		}
	};
}
