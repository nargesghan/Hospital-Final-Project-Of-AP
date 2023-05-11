#pragma once
#include<iostream>
#include <ctime>
#include<iostream>
#include"Allergies.h"

#include"person.h"
#include"stringstars.h"
#include"illness.h"
using namespace std;
class patient:public person
{
	string id;
	int age;
	Date accepted;
	illness sickness;
	string prescription;
	Allergies allergies;
public:
	patient() {
		id = "";
		age = 0;
	}
	void setidbydef(string st) {
		id = st;
	}
	void setage(int ag) {
		age = ag;
	}
	void setacc(Date acc) {
		
		accepted = acc;
	}
	void setsickness(illness il) {
		sickness = il;
	}
	void setpriscrip(string st)
	{
		prescription = st;
	}
	void setallergies(Allergies al) {
		allergies = al;
	}
	string getid() {
		return id;
	}
	int getage() {
		return age;
	}
	Date getaccepted(){
		return accepted;
	}
		illness getsickness() {
		return sickness;
	}
		string getprescription() {
			return prescription;
	}
		Allergies getallergies() {
			return allergies;
	}
	
		void printpatient() {
			getname().print_name();
			cout << "\ndate of birth:";
			getbirthDate().print_date();
			cout << endl;
			bool temp = getGender();
			cout << "Gender:";
			if (temp == 1)
				cout << "female\n";
			else
				cout << "male\n";
			gethomeaddress().print_address();
			cout << endl;
			getphonenumber().print_phone();
			cout << endl;
			cout << "id:";
			cout << id;
			cout << endl;
			cout << "age:\t" << age << endl;
			cout << "tarikh visit:";
			accepted.print_date();
			cout << endl;
			cout << "sickness:\n";
			sickness.print_illness();
			cout << "prescription:" << prescription << "\n";
			cout << endl;
			 allergies.print_allergies();
			 cout << endl;
}
};

