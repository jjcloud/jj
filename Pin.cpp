

using namespace std;

#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <map>

#include "pin.h"



//--------------------------------

CPin::CPin(CPinMode mode,string name,string text,int adress)
{
	this->m_Mode   = mode;
	this->m_Name   = name;
	this->m_Text   = text;
	this->m_Adress = adress; 
}	

//--------------------------------

CPinMode CPin::Mode()
{
	return this->m_Mode;
}

//--------------------------------

string CPin::Name()
{
	return this->m_Name;
}

//--------------------------------

string	CPin::Text()
{
	return this->m_Text;
}

//--------------------------------

int CPin::Adress()
{
	return m_Adress;
}
