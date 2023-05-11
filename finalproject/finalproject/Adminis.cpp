#include"Adminis.h"
ostream& operator <<(ostream& os, const AdministrativeStaff& dt) {
	os << dt.frontdeskstaff;
	return os;
}
istream& operator>>(istream& is, AdministrativeStaff& dt) {
	is >> dt.frontdeskstaff;
	return is;
}