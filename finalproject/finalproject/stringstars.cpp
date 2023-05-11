#include "stringstars.h"
ostream& operator <<(ostream& os, const Languages& dt) {
	os<<dt.Persian<<' ';
	os << dt.English << ' ';
	os << dt.Spanish << ' ';
	os << dt.Chinese << ' ';
	os << dt.Arabic << ' ';
	os << dt.French << ' ';
	os << dt.Swedish << ' ';
	os << dt.Russian << ' ';
	os << dt.Korean << ' ';
	os << dt.Japanese << ' ';
	return os;
}
istream& operator>>(istream& is, Languages& dt) {
	is >> dt.Persian;
	is >> dt.English;
	is >> dt.Spanish;
	is >> dt.Chinese;
	is >> dt.Arabic;
	is >> dt.French;
	is >> dt.Swedish;
	is >> dt.Russian;
	is >> dt.Korean;
	is >> dt.Japanese;
	return is;
}