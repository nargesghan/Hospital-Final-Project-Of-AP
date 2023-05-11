#pragma once
#include<iostream>
using namespace std;
class Speciality {
	bool Cardiologist;//ghalb
	bool Dermatologist;//pust
	bool ENT;
	bool Gunaecologist;
	bool Haematologist;
	bool Urologist;//kolie
	bool Radiologist;
	bool Pediatrician;//koodak
	bool Orthopaedist;
	bool Orthodontist;
	bool Ophthalmologist;//cheshm
	bool Neurologist;
	bool Internist;
	bool Endocrinologist;//ghodad
public:
	friend ostream& operator <<(ostream& os, const Speciality& dt);
	friend istream& operator>>(istream& is, Speciality& dt);
	Speciality() {
		Cardiologist = 0;//ghalb
		Dermatologist = 0;//pust
		ENT = 0;
		Gunaecologist = 0;
		Haematologist = 0;
		Urologist = 0;//kolie
		Radiologist = 0;
		Pediatrician = 0;//koodak
		Orthopaedist = 0;
		Orthodontist = 0;
		Ophthalmologist = 0;//cheshm
		Neurologist = 0;
		Internist = 0;
		Endocrinologist = 0;//ghodad
	}
	void setspec() {
		cout << "please enter your field of expertise:\n";
		cout << "1.Cardiologist 2.Dermatologist 3.ENT 4.Gunaecologist 5.Haematologist 6.Urologist\n"
			<< "7.Radiologist 8.Pediatrician 9.Orthopaedist 10.Orthodontist 11.Ophthalmologist \n"
			<< "12.Neurologist 13.Internist 14.Endocrinologist\n";
		int x;
		cin >> x;
		if (x == 1)
			Cardiologist = 1;
		if (x == 2)//ghalb
			Dermatologist = 1;
		if (x == 3)//pust
			ENT = 1;
		if (x == 4)
			Gunaecologist = 1;
		if (x == 5)
			Haematologist = 1;
		if (x == 6)
			Urologist = 1;//kolie
		if (x == 7)
			Radiologist = 1;
		if (x == 8)
			Pediatrician = 1;//koodak
		if (x == 9)
			Orthopaedist = 1;
		if (x == 10)
			Orthodontist = 1;
		if (x == 11)
			Ophthalmologist = 1;//cheshm
		if (x == 12)
			Neurologist = 1;
		if (x == 13)
			Internist = 1;
		if (x == 14)
			Endocrinologist = 1;//ghodad
		if (x < 1 || x>14)
		{
			cout << "You entered wrong number.please try again\n";
			setspec();
		}
	}
};
