#include "Date.h"
ostream& operator <<(ostream& os, const Date& dt) {
	os << dt.year<<' '  << dt.month <<' '<< dt.day;
	return os;
}
istream& operator>>(istream& is, Date& dt) {
	is >> dt.year >> dt.month >> dt.day;
	return is;
}