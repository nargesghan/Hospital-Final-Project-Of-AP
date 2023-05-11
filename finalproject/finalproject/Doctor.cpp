#include "Doctor.h"
#include"Speciality.h"
ostream& operator <<(ostream& os, const Doctor& dt) {
	os<<dt.speciality<<' ';
os<<dt. Surgeon;
	return os;
}
istream& operator>>(istream& is, Doctor& dt) {
	is >> dt.speciality >> dt.Surgeon;
	return is;
}