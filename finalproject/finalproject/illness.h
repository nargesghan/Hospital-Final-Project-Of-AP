#pragma once
#include<iostream>
#include<string>
using namespace std;
class illness {
	bool headache;
	bool bachache;
	bool amnesia;
	bool anemia;
	bool bloodshed;
	bool bladder_stone;
	bool cancer;
	bool tothache;
	bool soreThroat;
	bool constipate;
	bool depression;
	bool earache;
	bool eyesore;
	bool flu;
	bool fever;
	bool heartache;
	bool heatstroke;
	bool hypertension;
	bool hysteria;
	bool infection;
	bool madness;
	bool vomiting;
	bool paralytic;
	bool diarrehoea;
	bool hangover;
	bool nausea;
	bool vomit;
	bool asthme;
	bool injured;
	string Else;
public:
	friend ostream& operator <<(ostream& os, const illness& dt);
	friend istream& operator>>(istream& is, illness& dt);
	illness() {
		headache = 0;
		bachache = 0;
		amnesia = 0;
		anemia = 0;
		bloodshed = 0;
		bladder_stone = 0;
		cancer = 0;
		tothache = 0;
		soreThroat = 0;
		constipate = 0;
		depression = 0;
		earache = 0;
		eyesore = 0;
		flu = 0;
		fever = 0;
		heartache = 0;
		heatstroke = 0;
		hypertension = 0;
		hysteria = 0;
		infection = 0;
		madness = 0;
		vomiting = 0;
		paralytic = 0;
		diarrehoea = 0;
		hangover = 0;
		nausea = 0;
		vomit = 0;
		asthme = 0;
		injured = 0;
		Else = "";
	}
	void setsickness() {
		cout << "Please select your disease(Enter the number of diseases you have) and enter '-1' to end.\n";
		cout << "1.headache 2.bachache 3.amnesia 4.anemia 5.bloodshed 6.bladder stone 7.cancer 8.tothache 9.soreThroat 10.constipate\n"
			<< "11.depression 12.earache 13.eyesore 14.flu 15.fever 16.heartache 17.heatstroke 18.hypertension 19.hysteria 20.infection\n"
			<< "21.madness 22.vomiting 23.paralytic 24.diarrehoea 25.hangover 26.nausea 27.vomit 28.asthme 29.injured 30.else...\n ";
		int x;
		do {
			cin >> x;
			cin.ignore();
			if ((x < 1 || x>30) && x != -1) {
				cout << "Disease with this number was not found in the list.enter another:\n";
			}
			else {
				if (x == 1)
					headache = 1;
			
				if (x == 2)
					bachache = 1;
		
				if (x == 3)
					amnesia = 1;
	
				if (x == 4)
		
				if (x == 5)
					bloodshed = 1;
			
				if (x == 6)
					bladder_stone = 1;
			
				if (x == 7)
					cancer = 1;
	
				if (x == 8)
					tothache = 1;
			
				if (x == 9)
					soreThroat = 1;
				
				if (x == 10)
					constipate = 1;
			
				if (x == 11)
					depression = 1;
			
				if (x == 12)
					earache = 1;
				
				if (x == 13)
					eyesore = 1;
			
				if (x == 14)
					flu = 1;
			
				if (x == 15)
					fever = 1;
			
				if (x == 16)
					heartache = 1;/* 17.heatstroke 18.hypertension 19.hysteria 20.infection\n"
			<< "21.madness 22.vomiting 23.paralytic 24.diarrehoea 25.hangover 26.nausea 27.vomit 28.asthme 29.injured 30.else...\n ";*/
			
				if (x == 17)
					heatstroke = 1;
				
				if (x == 18)
					hypertension = 1;
			
				if (x == 19)
					hysteria = 1;
			
				if (x == 20)
					infection = 1;
				
				if (x == 21)
					madness = 1;
				
				if (x == 22)
					vomiting = 1;
			
				if (x == 23)
					paralytic = 1;
				
				if (x == 24)
					diarrehoea = 1;
			
				if (x == 25)
					hangover = 1;
			
				if (x == 26)
					nausea = 1;
			
				if (x == 27)
					vomit = 1;
		
				if (x == 28)
					asthme = 1;
		
				if (x == 29)
					injured = 1;
			
				if (x == 30)
					cin >> Else;

			}
		} while (x != -1);

	}
	void print_illness() {
		if (headache == 1)
			cout << "headache ";

		if (bachache == 1)
			cout << "bachache ";
		if (amnesia == 1)
			cout << "amnesia ";

		if (anemia == 1)
			cout << "anemia ";
		
		if (bloodshed == 1)
			cout << "bloodshed ";
		if (bladder_stone == 1)
			cout << "bladder stone ";
	
		if (cancer == 1)
			cout << "cancer ";

		if (tothache == 1)
			cout << "tothache ";
		if (soreThroat == 1)
			cout << "soreThroat ";
		if (constipate == 1)
			cout << "constipate ";
		if (depression == 1)
			cout << "depression ";

		if (earache == 1)
			cout << "earache ";
		if (eyesore == 1)
			cout << "eyesore ";

		if (flu == 1)
			cout << "flu ";

		if (fever == 1)
			cout << "fever ";

		if (heartache == 1)
			cout << "heartache ";
		if (heatstroke == 1)
			cout << "heatstroke ";

		if (hypertension == 1)
			cout << "hypertension ";

		if (hysteria == 1)
			cout << "hysteria ";

		if (infection == 1)
			cout << "infection ";

		if (madness == 1)
			cout << "madness ";

		if (vomiting == 1)
			cout << "vomiting ";

		if (paralytic == 1)
			cout << "paralytic ";

		if (diarrehoea == 1)
			cout << "diarrehoea ";

		if (hangover == 1)
			cout << "hangover ";

		if (nausea == 1)
			cout << "nausea ";

		if (vomit == 1)
			cout << "vomit ";

		if (asthme == 1)
			cout << "asthme ";

		if (injured == 1)
			cout << "injured ";

		if (Else.length() != 0)
			cout << Else << endl;
	}

};