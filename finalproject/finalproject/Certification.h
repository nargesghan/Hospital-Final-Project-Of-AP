#pragma once
#include<iostream>
using namespace std;
class Certification {
	bool Associate;
	bool Bachelor;
	bool Master;
	bool Doctorate;
public:
	friend ostream& operator <<(ostream& os, const Certification& dt);
	friend istream& operator>>(istream& is, Certification& dt);
	Certification() {
		Associate = 0;
		Bachelor = 0;
		Master = 0;
		Doctorate = 0;
	}
	void setcer() {
		cout << "Enter your degree:\n";
		cout << "1.Associate 2.Bachelor 3.Master 4.Doctorate \n ";
		int x;
		cin >> x;
		if (x == 1)
			Associate = 1;
		if (x == 2)
			Bachelor = 1;
		if (x == 3)
			Master = 1;
		if (x == 4)
			Doctorate = 1;
		if (x < 1 || x>4)
		{
			cout << "You enterd wrong number.please try again\n";
			setcer();
		}
	}
};

