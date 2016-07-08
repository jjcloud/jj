
#include <boost/property_tree/ptree.hpp>
#include <boost/exception/all.hpp>
#include <boost/format.hpp>
#include <boost/property_tree/ini_parser.hpp>

#include <stdio.h>
#include <stdlib.h>
#include "pcf.h"

using namespace std;

int CPcf::instances = 0;

CPcf::CPcf()
{
	instances++;	

	this->m_Name = str(boost::format("Pcf %1%") % instances);
	this->m_Text = str(boost::format("Not defined %1%") % instances);
	this->m_Type = 0;
	this->m_Addr = 0;

}

//--------------------------------

CPcf::~CPcf()
{
	instances--;
}

//--------------------------------

int CPcf::Load(string configFile)
{
	boost::property_tree::ptree pt;
	
	try
	{
		boost::property_tree::ini_parser::read_ini(configFile, pt);
		boost::format PinSection("pin%i");

		this->m_Addr = pt.get<int>("General.Addr");
		this->m_Type = pt.get<int>("General.Type");
		this->m_Name = pt.get<string>("General.Name");
		this->m_Text = pt.get<string>("General.Text");
	
		for (int c = 1; c <= 8; c++)
		{
			string section = boost::str(PinSection % c);
			string pinName = pt.get<string>(section + ".Name");
			string pinText = pt.get<string>(section + ".Text");
			CPinMode  pinMode = (CPinMode)pt.get<int>(section + ".Type");
		}
	
	
	}
	
	catch (boost::exception &e)
	{
		std::cerr << boost::diagnostic_information(e);
		return -1;
	}
	
	return 0;
}

//--------------------------------

int CPcf::Addr()
{
	return this->m_Addr;
}

//--------------------------------

string CPcf::Text()
{
	return this->m_Text;
}

//--------------------------------

int CPcf::Type()
{
	return this->m_Type;
}

//--------------------------------

string CPcf::Name()
{
	return this->m_Name;
}
