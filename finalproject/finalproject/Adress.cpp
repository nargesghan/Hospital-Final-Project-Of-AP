#include "Adress.h"
ostream& operator <<(ostream& os, const Address& dt) {
	os << dt.City<< ' '<< dt.st  <<' '<< dt.alley<<' '<<dt.no;
	return os;
}
istream& operator>>(istream& is, Address& dt) {
	is >> dt.City >> dt.st >> dt.alley>>dt.no;
	return is;
}