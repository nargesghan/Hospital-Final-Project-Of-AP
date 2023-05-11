#pragma once
#include<iostream>
#include"Adress.h"
#include"Phone.h"
#include"Linkedlist.h"
#include"Department.h"
using namespace std;
class Hospital
{
	Address address;
	string name;
	Phone phone;
	Department alldepartments[6];
public:
	Hospital(string nam) {
		name = nam;
		phone.setPhone("01138473828");
		alldepartments[0].setdepartmentname(1);
		alldepartments[1].setdepartmentname(2);
		alldepartments[2].setdepartmentname(3);
		alldepartments[3].setdepartmentname(4);
		alldepartments[4].setdepartmentname(5);
		alldepartments[5].setdepartmentname(6);
	}
	Hospital() {
		address.set();
		cout << "Enter name of Hospital:\n";
		cin >> name;
		phone.setphone();
		alldepartments[0].setdepartmentname(1);
		alldepartments[1].setdepartmentname(2);
		alldepartments[2].setdepartmentname(3);
		alldepartments[3].setdepartmentname(4);
		alldepartments[4].setdepartmentname(5);
		alldepartments[5].setdepartmentname(6);
	}
	void addstafftodep() {
		cout << "Select the department you want.\n";
	cout << "1.intensiveCareMedicine 2.PICU; 3.NeoNAtal_Intensive_Care_unit 4.ICU 5.PACU 6.Coronary_Care_unit\n";
	int x;
	cin >> x;
	if (x == 1)
		alldepartments[0].addstaff();
	if (x == 2)
		alldepartments[1].addstaff();
	if (x == 3)
		alldepartments[2].addstaff();
	if (x == 4)
		alldepartments[3].addstaff();
	if (x == 5)
		alldepartments[4].addstaff();
	if (x == 6)
		alldepartments[5].addstaff();
	}
	
};

