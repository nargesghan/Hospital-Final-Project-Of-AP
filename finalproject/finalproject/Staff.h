#pragma once
#include<iostream>
#include"Date.h"
#include"person.h"
#include"member.h"
#include"stringstars.h"
#include"Education.h"
#include<ctime>
#include"Certification.h"
#include"Technicalstaff.h"
#include"Adminis.h"
using namespace std;
class Staff :public person
{
	Date joined;
	Education educ;
	Certification certif;
	Languages languages;
	Tecnicalstaff technicalstaff;
	AdministrativeStaff admin;
	OperationsStaff operationstaff;
public:
	Staff() {

	}
	void setjoined(Date x) {
		joined = x;
	}
	void seteducation(Education ed) {
		educ = ed;
	}
	void setcertification(Certification cer) {
		certif = cer;
	}
	void setlanguage(Languages lan) {
		languages = lan;
	}
	void setdtechnicalstaff(Tecnicalstaff tch) {
		technicalstaff = tch;
	}
	void setadd(AdministrativeStaff admi) {
		admin = admi;
	}
	void setopp(OperationsStaff operationst){
		operationstaff = operationst;
}
	void setstaff() {
		/**
		setjoind();
		system("cls");
		educ.seteducation();
		system("cls");
		certif.setcer();
		system("cls");
		languages.setlang();
		system("cls");
		int x;
		cout << "Are you 1.Tecnicalstaff , 2.AdministrativeStaff or 3.OperationsStaff ?(entr number)\n";
		cin >> x;
		if (x == 1)
			technicalstaff.setTecnicalstaff();
		if (x == 2)
			admin.setAdministrativeStaff();
		if (x == 3)
			operationstaff.setop();*/
	}
	void setjoind() {
		int d, m, y;
		time_t now = time(0);
		struct tm newtime;
		localtime_s(&newtime, &now);
		y = 1900 + newtime.tm_year;
		d = newtime.tm_mday;
		m = newtime.tm_mon;
		joined.set(d, m, y);
	}

	Date getjoined() {
		return joined;
	}
	Education geteduc() {
		return educ;
	}
	Certification getcertif() {
		return certif;
	}
	Languages getlanguages() {
		return languages;
	}
	Tecnicalstaff gettechnicalstaff() {
		return technicalstaff;
	}
	AdministrativeStaff getadmin() {
		return admin;
	}
	OperationsStaff getoperationstaff() {
		return operationstaff;
	}
	
};

