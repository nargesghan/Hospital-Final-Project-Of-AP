#pragma once
#include<iostream>
using namespace std;
class FrontDeskStaff {
	bool Reseptionist;
public:
	friend ostream& operator <<(ostream& os, const FrontDeskStaff& dt);
	friend istream& operator>>(istream& is, FrontDeskStaff& dt);
	FrontDeskStaff() {
		Reseptionist = 0;
	}
	FrontDeskStaff(const FrontDeskStaff& f) {
		Reseptionist = f.Reseptionist;
	}
	void setFrontDeskStaff() {
		cout << "Are you Reseptionist?(yes/no)\n";
		cin.get();
		string ans;
		if (ans == "yes")
			Reseptionist = 1;
		if (ans == "no") {
			Reseptionist = 0;
		}
	}
};
