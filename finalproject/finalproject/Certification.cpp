#include "Certification.h"
ostream& operator <<(ostream& os, const Certification& dt) {

	os<< dt.Associate<<' ';
	os<<dt. Bachelor<<' ';
 os<<dt.Master<<' ';
	os<<dt.Doctorate;
	return os;
}
istream& operator>>(istream& is, Certification& dt) {
	is>>dt.Associate;
	is>>dt.Bachelor;
	is>>dt.Master;
	is>>dt.Doctorate;
	return is;
}