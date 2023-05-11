#include "member.h"
ostream& operator <<(ostream& os, const OperationsStaff& dt) {
	os<<dt.Nurse<<' ';
os<<dt.doctor;
	return os;
}
istream& operator>>(istream& is, OperationsStaff& dt) {
	is >> dt.Nurse >> dt.doctor;
	return is;
}