#ifndef MYHEADER_H
#define MYHEADER_H

using namespace std;

#include <string>


enum PinMode { Input=0, Output=1, Blink=2 };

class CPin
{	
public:	



	
	CPin(PinMode mode,string name,string text,int Adress);
	
	PinMode Mode();
	string  Name();
	string	Text();
	int 	Adress();

private:

	PinMode m_Mode;
	string  m_Name;
	string	m_Text;
	int 	m_Adress;
};

#endif
