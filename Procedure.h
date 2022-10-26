#pragma once
#include <string>

using namespace std;

class Procedure
{
private:
	string procedure;
	string date;
	string doctor;
	double charges;
public:
	Procedure()
	{
		string procedure = " ";
		string date = " ";
		string doctor = " ";
		double charges = 0.0;
	}
	Procedure(string proced, string d, string doc, double c)
	{
		procedure = proced;
		date = d;
		doctor = doc;
		charges = c;
	}
	void setProcedure(string proced)
	{
		procedure = proced;
	}
	void setDate(string d)
	{
		date = d;
	}
	void setDoctor(string doc)
	{
		doctor = doc;
	}
	void setCharges(double c)
	{
		charges = c;
	}
	string getProcedure() const
	{
		return procedure;
	}
	string getDate() const
	{
		return date;
	}
	string getDoctor() const
	{
		return doctor;
	}
	double getCharges() const
	{
		return charges;
	}
	double totalCharges() const
	{
		return charges;
	}
};
