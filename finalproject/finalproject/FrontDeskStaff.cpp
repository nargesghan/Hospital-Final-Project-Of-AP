#include "FrontDeskStaff.h"
ostream& operator <<(ostream& os, const FrontDeskStaff& dt) {
	os << dt.Reseptionist;
	return os;
}
istream& operator>>(istream& is, FrontDeskStaff& dt) {
	is >> dt.Reseptionist;
	return is;
}