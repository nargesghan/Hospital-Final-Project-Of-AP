#include "Technologist.h"
ostream& operator <<(ostream& os, const Technologist& dt) {
	os<<dt.surgical_Technologist;
	return os;
}
istream& operator>>(istream& is, Technologist& dt) {
	is >> dt.surgical_Technologist;
	return is;
}