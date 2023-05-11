#include "Technicalstaff.h"
ostream& operator <<(ostream& os, const Tecnicalstaff& dt) {
	os << dt.Technician;
	os<<' '<<dt.technologist;;
	return os;
}
istream& operator>>(istream& is, Tecnicalstaff& dt) {
	is >> dt.Technician;
	is >> dt.technologist;
	return is;
}