#include "Education.h"
ostream& operator <<(ostream& os, const Education& dt) {
	
		os << dt.Medicine<<' ';
	
		os<<dt.Pharmacy<<' ' ;

		os<<dt.Law <<' ';
        os<<dt.Public_Health <<' ';
	
		os<<dt.Public_Administrarion <<' ';
	
		os<<dt.Technology <<' ';
	
		os<<dt.Social_Work <<' ';

		os<<dt.Business_Administration <<' ';
	
		os<<dt.Engineering <<' ';
	
		os<<dt.Science <<' ';

		os<<dt.Biomedical_Engineering <<' ';
		os << dt.Else ;
	return os;
}
istream& operator>>(istream& is, Education& dt) {
	is >> dt.Medicine ;

	is>>dt.Pharmacy ;

	is >> dt.Law;
	is >> dt.Public_Health ;

	is >> dt.Public_Administrarion ;

	is >> dt.Technology ;

	is >> dt.Social_Work;

	is >> dt.Business_Administration;

	is >> dt.Engineering ;

	is >> dt.Science ;

	is >> dt.Biomedical_Engineering ;
	is >> dt.Else ;
	return is;
}