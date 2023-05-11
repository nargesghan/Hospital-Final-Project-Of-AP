#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Doctor.h"
class OperationsStaff {
	bool Nurse;
	Doctor doctor;
public:
	friend ostream& operator <<(ostream& os, const OperationsStaff& dt);
	friend istream& operator>>(istream& is, OperationsStaff& dt);
	OperationsStaff() {
		Nurse = 0;
	}
	void setop() {
		cout << "Are you 1.nurse or 2.doctor?\n";
		int x;
		cin.get();
		cin >> x;
		if (x == 1)
			Nurse = 1;
		if (x == 2)
			doctor.setdoctor();
	}
};


