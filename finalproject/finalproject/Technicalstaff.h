#pragma once
#include"Technologist.h"
#include<iostream>
using namespace std;
class Tecnicalstaff {
	bool Technician;
	Technologist technologist;
public:
	friend ostream& operator <<(ostream& os, const Tecnicalstaff& dt);
	friend istream& operator>>(istream& is, Tecnicalstaff& dt);
	Tecnicalstaff() {
		Technician = 0;
	}
	void setTecnicalstaff() {
		cout << "Are you 1.Technician or 2.technologist?\n";
		int x;
		cin >> x;
		cin.get();
		if (x == 1)
			Technician = 1;
		else {
			technologist.setTechnologist();
		}
	}
};

