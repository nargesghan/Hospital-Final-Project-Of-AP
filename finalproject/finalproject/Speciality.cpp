#include "Speciality.h"
ostream& operator<<(ostream& os, const Speciality& dt) {
	os<<dt. Cardiologist<<' ';//ghalb
	os << dt.Dermatologist << ' ';//pust
	os << dt. ENT << ' ';
	os << dt. Gunaecologist << ' ';
	os << dt. Haematologist << ' ';
	os << dt. Urologist << ' ';//kolie
	os << dt. Radiologist << ' ';
	os << dt. Pediatrician << ' ';//koodak
	os << dt.Orthopaedist << ' ';
	os << dt. Orthodontist << ' ';
	os << dt. Ophthalmologist << ' ';//cheshm
	os << dt. Neurologist << ' ';
	os << dt. Internist << ' ';
	os << dt.Endocrinologist << ' ';//gho
	return os;
}
istream& operator>>(istream& is, Speciality& dt){
is>>dt.Cardiologist;//ghalb
is >> dt.Dermatologist;//pust
is >> dt.ENT;
is >> dt.Gunaecologist;
is >> dt.Haematologist;
is >> dt.Urologist;//kolie
is >> dt.Radiologist;
is >> dt.Pediatrician;//koodak
is >> dt.Orthopaedist;
is >> dt.Orthodontist;
is >> dt.Ophthalmologist;//cheshm
is >> dt.Neurologist;
is >> dt.Internist;
is >> dt.Endocrinologist;//gho
return is;
}