#include<iostream>
#include"FrontDeskStaff.h"
using namespace std;
class AdministrativeStaff {
	FrontDeskStaff frontdeskstaff;
public:
	friend ostream& operator <<(ostream& os, const AdministrativeStaff& dt);
	friend istream& operator>>(istream& is, AdministrativeStaff& dt);
	AdministrativeStaff() {

	}
	void setAdministrativeStaff() {
		frontdeskstaff.setFrontDeskStaff();
	}
};