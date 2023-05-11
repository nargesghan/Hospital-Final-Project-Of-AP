#include "Phone.h"
ostream& operator <<(ostream& os, const Phone& dt) {
	os << dt.number;
	return os;
}
istream& operator>>(istream& is, Phone& dt) {
	is >> dt.number;
	return is;
}