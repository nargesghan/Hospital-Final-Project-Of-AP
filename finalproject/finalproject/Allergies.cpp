#include "Allergies.h"
ostream& operator <<(ostream& os, const Allergies& dt) {
	
		os << dt.garde<<' ';
	
		os << dt.animals << ' ';
	
		os << dt.gardoghobar << ' ';
	
		os << dt.nishehashare<< ' ';
	
		os << dt.latex << ' ';
	os << dt.medicine << ' ';
	os << dt.food ;
	return os;
}
istream& operator>>(istream& is, Allergies& dt) {
	is >> (dt.garde);

	is >> (dt.animals);
	is >> (dt.gardoghobar);
	is >> (dt.nishehashare);
	is >> (dt.latex);
	is >> dt.medicine;
	is >> dt.food;
	return is;
}