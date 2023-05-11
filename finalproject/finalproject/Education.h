#pragma once
#include<iostream>
using namespace std;
#include<string>
class Education {
	bool Medicine;
	bool Pharmacy;
	bool Law;
	bool Public_Health;
	bool Public_Administrarion;
	bool Technology;
	bool Social_Work;
	bool Business_Administration;
	bool Engineering;
	bool Science;
	bool Biomedical_Engineering;
	string Else;
public:
	friend ostream& operator <<(ostream& os, const Education& dt);
	friend istream& operator>>(istream& is, Education& dt);
	Education() {
		Medicine = 0;
		Pharmacy = 0;
		Law = 0;
		Public_Health = 0;
		Public_Administrarion = 0;
		Technology = 0;
		Social_Work = 0;
		Business_Administration = 0;
		Engineering = 0;
		Science = 0;
		Biomedical_Engineering = 0;
		Else = "";
	}
	void seteducation() {
		cout << "please enter the option number for your major:\n";
		cout << " 1.Medicine 2.Pharmacy 3.Law 4.Public_Health 5.Public_Administrarion\n"
			<< "6.Technology 7.Social_Work 8.Business_Administration 9.Engineering \n"
			<< "10.Science 11.Biomedical_Engineering 12.Else\n";
		int x;
		cin >> x;
		if (x == 1)
			Medicine = 1;
		if (x == 2)
			Pharmacy = 1;
		if (x == 3)
			Law = 1;
		if (x == 4)
			Public_Health = true;
		if (x == 5)
			Public_Administrarion = true;
		if (x == 6)
			Technology = 1;
		if (x == 7)
			Social_Work = 1;
		if (x == 8)
			Business_Administration = 1;
		if (x == 9)
			Engineering = 1;
		if (x == 10)
			Science = 1;
		if (x == 11)
			Biomedical_Engineering = 1;
		if (x == 12)
		{
			cout << "please enter your field of study:\n";
			getline(cin, Else);
		}
		if (x < 1 || x>12) {
			cout << "the number you entered is not available in the list.Please try again.\n";
			seteducation();
		}
	}
};

