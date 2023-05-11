#include "illness.h"
ostream& operator <<(ostream& os, const illness& dt) {
	os << dt.headache << ' ';
		
		os << dt.bachache<< ' ';

		os << dt.amnesia << ' ';

		os << dt.anemia << ' ';

		os << dt.bloodshed << ' ';

		os << dt.bladder_stone<< ' ';


		os << dt.cancer<< ' ';


		os << dt.tothache<< ' ';


		os << dt.soreThroat<< ' ';


		os << dt.constipate<< ' ';

	
		os << dt.depression << ' ';

		os << dt.earache << ' ';

		os << dt.eyesore << ' ';

		os << dt.flu << ' ';

	
		os << dt.fever << ' ';


		os << dt.heartache<< ' ';


		os << dt.heatstroke << ' ';


		os << dt.hypertension << ' ';


		os << dt.hysteria << ' ';

		os << dt.infection << ' ';

	
		os << dt.madness << ' ';


		os << dt.vomiting << ' ';

	
		os << dt.paralytic << ' ';

	
		os << dt.diarrehoea << ' ';

	
		os << dt.hangover<< ' ';

	
		os << dt.nausea << ' ';

	
		os << dt.vomit << ' ';

	
		os << dt.asthme << ' ';

	
		os << dt.injured << ' ';

	os << dt.Else ;
	return os;
}
istream& operator>>(istream& is, illness& dt) {
	is >> dt.headache;
	is >> (dt.bachache);
	is >> (dt.amnesia);
	is >> (dt.anemia);
	is >> (dt.bloodshed);
	is >> (dt.bladder_stone);
	is >> (dt.cancer);
	is >> (dt.tothache);
	is >> (dt.soreThroat);
	is >> (dt.constipate);
	is >> (dt.depression);
	is >> (dt.earache);
	is >> (dt.eyesore);
	is >> (dt.flu);
	is >> (dt.fever);
	is >> (dt.heartache);
	is >> (dt.heatstroke);
	is >> (dt.hypertension);
	is >> (dt.hysteria);
	is >> (dt.infection);
	is >> (dt.madness);
	is >> (dt.vomiting);
	is >> (dt.paralytic);
	is >> (dt.diarrehoea);
	is >> (dt.hangover);
	is >> (dt.nausea);
	is >> (dt.vomit);
	is >> (dt.asthme);
	is >> (dt.injured);
	is >> dt.Else;
	return is;
}