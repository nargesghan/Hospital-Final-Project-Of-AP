#pragma once
#include<iostream>
using namespace std;
class Date {
	int day;
	int month;
	int year;
public:
	friend ostream& operator <<(ostream& os, const Date& dt);
	friend istream& operator>>(istream& is,  Date& dt);
	Date() {
		day = 1;
		month = 1;
		year = 2021;
	}
	Date(int d, int m, int y) {
		if (d >= 1 && d <= 31) {
			day = d;
		}
		else
			d = 1;
		if (m >= 1 && m <= 12) {
			month = m;
		}
		else
			month = 1;
		if (y <= 0 || y > 2021) {
			year = 2021;
		}
		else
			year = y;
	}
	Date(const Date& d) {
		day = d.day;
		year = d.year;
		month = d.month;
	}
	void set(int d, int m, int y) {
		if (d >= 1 && d <= 31) {
			day = d;
		}
		else
			d = 1;
		if (m >= 1 && m <= 12) {
			month = m;
		}
		else
			month = 1;
		if (y <= 0 || y > 2021) {
			year = 2021;
		}
		else
			year = y;
	}
	void setbirth() {
		cout << "enter dateofbirh(day/month/year):\n";
		int d, m, y;
		cin >> d >> m >> y;
		set(d, m, y);
	}
	int getyear() {
		return year;
	}
	void print_date() {
		cout << "\nyear/month/day:\t";
		cout << year <<'/'<< month<<'/' << day;
	}
};


/**
*/
