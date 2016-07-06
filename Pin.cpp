

using namespace std;

#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <map>

#include "Pin.h"



//--------------------------------

CPin::CPin(PinMode mode,string name,string text,int adress)
{
	m_Mode 	 = mode;
	m_Name	 = name;
	m_Text 	 = text;
	m_Adress = adress; 
}	

//--------------------------------

PinMode CPin::Mode()
{
	return m_Mode;
}

//--------------------------------

string CPin::Name()
{
	return m_Name;
}

//--------------------------------

string	CPin::Text()
{
	return m_Text;
}

//--------------------------------

int CPin::Adress()
{
	return m_Adress;
}
