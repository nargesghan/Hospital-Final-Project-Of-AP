#pragma once
#include<iostream>
using namespace std;
class FullName {

	string givenName;
	string middleName;
	string familyName;
public:
	friend ostream& operator <<(ostream& os, const FullName& dt);
	friend istream& operator>>(istream& is, FullName& dt);
	FullName() {
		givenName = "";
		middleName = "";
		familyName = "";
	}
	void setfullname() {
		cout << "enter name/middlename/familyname:\n";
		cin >> givenName >> middleName >> familyName;
		cin.get();
	}
	void print_name() {
		cout << " name/middlename/familyname:\n";
		cout<< givenName<<' ' <<middleName<<' ' << familyName;
	}
};
