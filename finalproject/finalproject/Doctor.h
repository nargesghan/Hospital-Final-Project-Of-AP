#pragma once
#include<iostream>
using namespace std;
#include"Speciality.h"
class Doctor {
	Speciality speciality;
	bool Surgeon;
public:
	friend ostream& operator <<(ostream& os, const Doctor& dt);
	friend istream& operator>>(istream& is, Doctor& dt);
	Doctor() {
		Surgeon = 0;
	}
	void setdoctor() {
		speciality.setspec();
		cout << "are you surgeon?(1/0)\n";
		cin >> Surgeon;
	}
};
