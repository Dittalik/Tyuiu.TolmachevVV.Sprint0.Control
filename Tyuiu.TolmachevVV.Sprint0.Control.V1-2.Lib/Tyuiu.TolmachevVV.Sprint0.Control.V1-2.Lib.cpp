// Tyuiu.TolmachevVV.Sprint0.Control.V1-2.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
#include <string>


using namespace std;

class ServiceV1 :public ISprint0Task8V0
{
	virtual int Control(int a) override
	{
		string sa = to_string(a);
		if (sa.length() != 3)
		{
			return false;
		}
		else
		{
			return 24;
		}
	}
};
class ServiceV2 :public ISprint0Task8V2
{
	virtual int Rezultat(int a, int b, int c) override
	{
		return 5 + (2 * a - c) / (3 + pow(b,2));
	}
};
class ServiceV3 :public ISprint0Task8V1
{
	virtual float Chislo(float a, float b) override
	{
		return sqrt((12 * a + pow(a, 4) / (pow(a, 2) + sqrt(234 + b))));
	}
};
class ServiceV4 :public ISprint0Task8V2
{
	virtual int Rezultat(int a, int b, int c) override
	{
		return (a + b - c) / (pow(a, 2) + 2);
	}
};