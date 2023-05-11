#pragma once
#include<iostream>
using namespace std;
#include"Staff.h"
#include"Linkedlist.h"
#include<string>
class departmentname {
	bool intensiveCareMedicine;
	bool PICU;
	bool NeoNAtal_Intensive_Care_unit;
	bool ICU;
	bool PACU;
	bool Coronary_Care_unit;
public:
	departmentname() {
		intensiveCareMedicine = 0; PICU = 0; NeoNAtal_Intensive_Care_unit = 0; ICU = 0; PACU = 0; Coronary_Care_unit = 0;
	}
	void setdepname(int x) {
		if (x == 1)
			intensiveCareMedicine = 1;
		if (x == 2)
			PICU = 1;
		if (x == 3)
			NeoNAtal_Intensive_Care_unit = 1;
		if (x == 4)
			ICU = 1;
		if (x == 5)
			PACU = 1;
		if (x == 6)
			Coronary_Care_unit = 1;
	}
	
};
class Department
{
	departmentname dpname;
	Linkedlist<Staff>staffs;
	
public:
	
	 void setdepartmentname(int x) {
		 dpname.setdepname(x);
	}
	void addstaff() {
		Staff* newstaff = new Staff();
		newstaff->setstaff();
		staffs.insertAtBack(*newstaff);
	}
	
	
};

