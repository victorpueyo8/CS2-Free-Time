#include<iostream>
#include<string>
#include "Patient.h"
#include "Procedure.h"

void showpatientInfo(Patient);

int main()
{
	string name, address, emergencyContact;
	int phoneNum;
	double total = 0;

	cout << "Name of the patient (Name, Middle name, Last name): ";
	getline(cin, name);

	cout << "\nAddress, City, State, ZIP code: ";
	getline(cin, address);

	cout << "\nPhone number: ";
	cin >> phoneNum;

	cout << "\nName and phone number of emergency contact: ";
	getline(cin, emergencyContact);
	cin.ignore();

	Patient patient1(name, address, phoneNum, emergencyContact);

	showpatientInfo(patient1);

	Procedure procedure1("Physical Exam", "10/06/2022", "Dr. Irvine", 250.00);
	Procedure procedure2("X-Ray", "10/06/2022", "Dr. Jamison", 500.00);
	Procedure procedure3("Blood test", "10/06/2022", "Dr. Smith", 200.0);

	cout << "Procedures Information " << endl;
	cout << "----------------------------------------------------------------------" << endl << endl;
	cout << "Procedure #1: " << endl;
	cout << "Procedure name: " << procedure1.getProcedure() << endl;
	cout << "Date: " << procedure1.getDate() << endl;
	cout << "Doctor: " << procedure1.getDoctor() << endl;
	cout << "Charges: " << procedure1.getCharges() << endl << endl;

	cout << "Procedure #2: " << endl;
	cout << "Procedure name: " << procedure2.getProcedure() << endl;
	cout << "Date: " << procedure2.getDate() << endl;
	cout << "Doctor: " << procedure2.getDoctor() << endl;
	cout << "Charges: " << procedure2.getCharges() << endl << endl;

	cout << "Procedure #3: " << endl;
	cout << "Procedure name: " << procedure3.getProcedure() << endl;
	cout << "Date: " << procedure3.getDate() << endl;
	cout << "Doctor: " << procedure3.getDoctor() << endl;
	cout << "Charges: " << procedure3.getCharges() << endl << endl;

	cout << "----------------------------------------------------------------------" << endl;
	total = procedure1.getCharges() + procedure2.getCharges() + procedure3.getCharges();
	cout << "Total charges " << total << endl << endl;

	system("pause");
	return 0;
}

void showpatientInfo(Patient patient1)
{
	cout << "\nPatient Information" << endl;
	cout << "----------------------------------------------------------------------" << endl << endl;
	cout << "First Name, Middle Name, Last Name: " << patient1.getName() << endl;
	cout << "Adress, city, state, and ZIP code: " << patient1.getAddress() << endl;
	cout << "Phone number: " << patient1.getphoneNum() << endl;
	cout << "Name and phone number of emergency contact: " << patient1.getemergencyContact() << endl << endl << endl;
}


