#pragma once
#include <string>
#include <map>
#include "pin.h"

using namespace std;
class CPcf
{
	

public:
	CPcf();
	~CPcf();
	int Load(string configFile);
	int Addr();
	int Type();
	
	string Text();
	string Name();

	map<CPin, string> Pins;

private:

	static int instances;

	string m_Name;
	string m_Text;
	int    m_Addr;
	int    m_Type;


};

