#pragma once
#include<iostream>
using namespace std;
class Address {
	string City;
	string st;
	string alley;
	int no;
public:
	friend ostream& operator <<(ostream& os, const Address& dt);
	friend istream& operator>>(istream& is, Address& dt);
	Address() {
		City = "";
		st = "";
		alley = "";
		no = -1;
	}
	void set() {
		cout << "enter city/street/alley/no:\n";
		cin >> City >> st >> alley >> no;
	}
	string getcity() {
		return City;
	}
	string getst() {
		return st;
	}
	string getalley() {
		return alley;
	}
	int getno() {
		return no;
	}
	void print_address() {
		cout << "city/street/alley/no:\n";
		cout<<City<<" / " << st << " / " <<alley << " / " << no;
	}
};
