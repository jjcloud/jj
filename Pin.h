#pragma once

using namespace std;

#include <string>
#include <stdio.h>

enum CPinMode { Input=0, Output=1, Blink=2 };

class CPin
{	
public:	



	
	CPin(CPinMode mode,string name,string text,int Adress);
	
	CPinMode Mode();
	string  Name();
	string	Text();
	int 	Adress();

private:

	CPinMode m_Mode;
	string  m_Name;
	string	m_Text;
	int 	m_Adress;
};

