#pragma once
#include<iostream>
#include"Adress.h"
#include"Phone.h"
#include"Date.h"
#include"FullName.h"
using namespace std;
class person
{
private:
	FullName name;//
	Date birthDate;//
	bool Gender;//
	Address homeaddress;
	Phone phonenumber;
public:
	person() {
		Gender = 1;
	}
	void setname(FullName na) {
		name = na;
	}
	void setbirth(Date d) {
		birthDate = d;
	}
	void setgender(bool g) {
		Gender = g;
	}
	void setaddress(Address ad) {
		homeaddress = ad;
	}
	void setphone(Phone ph) {
		phonenumber = ph;
	}
	void setname() {
		name.setfullname();
	}
	void setbirth() {
		cout << "enter dateofbirh(day/month/year):\n";
		int d, m, y;
		cin >> d >> m >> y;
		birthDate.set(d, m, y);
	}
	void setgender() {
		cout << "Choose your gender(1.male 2.female):\n";
		int x;
		cin >> x;
		if (x == 1)
			Gender = 0;
		if (x == 2) {
			Gender = 1;
			if (x != 1 && x != 2)
				setgender();
		}
	}
	void setaddress() {
		homeaddress.set();
	}
	void setphonenumber() {
		phonenumber.setphone();
	}
	int getyear() {
		return birthDate.getyear();
	}
	FullName getname() {
		return name;
	}
	Date getbirthDate() {
		return birthDate;
	}
	bool getGender() {
		return Gender;
	}
	Address gethomeaddress() {
		return homeaddress;
	}
	Phone getphonenumber() {
		return phonenumber;
	}
};

