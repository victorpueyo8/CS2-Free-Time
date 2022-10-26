#pragma once
#include <string>

using namespace std;

class Patient
{
private:
	string name;
	string address;
	int phoneNum;
	string emergencyContact;
public:
	Patient()
	{
		name = " ";
		address = " ";
		phoneNum = 0;
		emergencyContact = " ";
	}
	Patient(string n, string a, int num, string emergency)
	{
		name = n;
		address = a;
		phoneNum = num;
		emergencyContact = emergency;
	}
	string getName()  const
	{
		return name;
	}
	string getAddress()  const
	{
		return address;
	}
	int getphoneNum()  const
	{
		return phoneNum;
	}
	string getemergencyContact()  const
	{
		return emergencyContact;
	}
};

