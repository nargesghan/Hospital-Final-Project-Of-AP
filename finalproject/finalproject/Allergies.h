#pragma once
#include<iostream>
#include<string>
using namespace std;
class Allergies {
	bool garde;
	bool animals;
	bool gardoghobar;
	bool nishehashare;
	bool latex;
	string medicine;
	string food;
public:
	friend ostream& operator <<(ostream& os, const Allergies& dt);
	friend istream& operator>>(istream& is, Allergies& dt);
	Allergies() {
		garde = 0;
		animals = 0;
		gardoghobar = 0;
		nishehashare = 0;
		latex = 0;
		medicine = "";
		food = "";
	}
	void setallergies() {
		bool ans;
		cout << "Are you allergic to pollen?(0/1)\n";
		cin >> ans;
		garde = ans;
		cout << "Are you allergic to animals?(0/1)\n";
		cin >> ans;
		animals = ans;
		cout << "Are you allergic to dust?(0/1)\n";
		cin >> ans;
		gardoghobar = ans;
		cout << "Are you allergic to insect bite?(0/1)\n";
		cin >> ans;
		nishehashare = ans;
		cout << "Are you allergic to latex?(0/1)\n";
		cin >> ans;
		latex = ans;
		cout << "Are you allergic to a particular drug?if you dont have it,enter'non'\n";
		cin >> medicine;
		cout << "Are you allergic to a particular food?if you dont have it,enter'non'\n";
		cin >> food;

	}
	void print_allergies() {
		cout << "Allergies:\n";
			if (garde == 1)
				cout << "garde ";
			if (animals == 1)
				cout << "animals ";
			if (gardoghobar == 1)
				cout << "gardoghobar ";
			if (nishehashare == 1)
				cout << "nishehashare ";

			if (latex)
				cout << "latex ";
			if (medicine != "non")
				cout << medicine<<' ';
			if (food != "non")
				cout << food;
	}
};

/**
*/