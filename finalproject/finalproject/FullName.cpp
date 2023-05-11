#include "FullName.h"
ostream& operator <<(ostream& os, const FullName& dt) {
	os << dt.givenName <<' '<< dt.middleName <<' ' << dt.familyName;
	return os;
}
istream& operator>>(istream& is, FullName& dt) {
	is >> dt.givenName >> dt.middleName>> dt.familyName;
	return is;
}