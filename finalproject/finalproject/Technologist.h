#pragma once
#include<iostream>
using namespace std;
class Technologist {
	bool surgical_Technologist;
public:
	friend ostream& operator <<(ostream& os, const Technologist& dt);
	friend istream& operator>>(istream& is, Technologist& dt);
	Technologist() {
		surgical_Technologist = 0;
	}
	void setTechnologist() {
		cout << "Are you surgical Technologist?(yes/no)\n";
		cin.get();
		string ans;
		if (ans == "yes")
			surgical_Technologist = 1;
		if (ans == "no") {
			surgical_Technologist = 0;
		}
	}
};

