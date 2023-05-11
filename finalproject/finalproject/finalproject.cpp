#include<iostream>
#include"person.h"
#include"patient.h"
#include"Staff.h"
#include"Department.h"
#include"Linkedlist.h"
#include"Hospital.h"
#include<fstream>
#include<iomanip>
#include"Education.h"
using namespace std;
void showmenu();
int main() {
	fstream strr("temp.txt");
	while (true) {
		int x;
		showmenu();
		cin >> x;
		system("cls");
		if (x == 1) {
			FullName name;//
			Date birthDate;//
			bool Gender = 0;//
			Address homeaddress;
			Phone phonenumber;
			Date joined;
			Education educ;
			Certification certif;
			Languages languages;
			Tecnicalstaff technicalstaff;
			AdministrativeStaff admin;
			OperationsStaff operationstaff;
			ofstream ostaff("staffs.txt", ios::app);
			if (!ostaff) {
				cerr << "file could not be open\n";
				cin.get();
				exit(1);
			}
			Staff p;
			system("cls");
			name.setfullname();
			system("cls");
			birthDate.setbirth();
			system("cls");
			cout << "Choose your gender(1.male 2.female):\n";
			int x;
			cin >> x;
			if (x == 1)
				Gender = 0;
			if (x == 2) {
				Gender = 1;
				if (x != 1 && x != 2)
					Gender = 1;
			}
			system("cls");
			homeaddress.set();
			system("cls");
			phonenumber.setphone();
			system("cls");
			int d, m, y;
			time_t now = time(0);
			struct tm newtime;
			localtime_s(&newtime, &now);
			y = 1900 + newtime.tm_year;
			d = newtime.tm_mday;
			m = newtime.tm_mon;
			joined.set(d, m, y);
			system("cls");
			educ.seteducation();
			system("cls");
			certif.setcer();
			system("cls");
			languages.setlang();
			system("cls");
			int xxx;
			cout << "Are you 1.Tecnicalstaff , 2.AdministrativeStaff or 3.OperationsStaff ?(entr number)\n";
			cin >> xxx;
			if (xxx == 1)
				technicalstaff.setTecnicalstaff();
			if (xxx == 2)
				admin.setAdministrativeStaff();
			if (xxx == 3)
				operationstaff.setop();
			p.setname(name);
			p.setbirth(birthDate);
			p.setgender(Gender);
			p.setaddress(homeaddress);
			p.setphone(phonenumber);
			p.setjoined(joined);
			p.seteducation(educ);
			p.setcertification(certif);
			p.setlanguage(languages);
			p.setdtechnicalstaff(technicalstaff);
			p.setadd(admin);
			p.setopp(operationstaff);
			ostaff << left << ' ' << p.getname() << ' ' << p.getbirthDate() << ' ' << p.getGender() <<
				' ' << p.gethomeaddress() << ' ' << p.getphonenumber() << ' ' << p.getjoined() << ' ' <<
				p.geteduc() << ' ' << p.getcertif() << ' ' << p.getlanguages() << ' ' << p.gettechnicalstaff() << ' ' << p.getadmin() <<
				' ' << p.getoperationstaff() << ' ' << endl;
			system("cls");
		}
		if (x == -1) {

		}
		if (x == 2) {
			FullName name;//
			Date birthDate;//
			bool Gender = 0;//
			Address homeaddress;
			Phone phonenumber;
			string id;
			int age;
			Date accepted;
			illness sickness;
			string prescription;
			Allergies allergies;
			ofstream ofile("patients.txt", ios::app);
			if (!ofile) {
				cerr << "file could not be open\n";
				cin.get();
				exit(1);
			}
			patient p;
			system("cls");
			name.setfullname();
			birthDate.setbirth();
			cout << "Choose your gender(1.male 2.female):\n";
			int x;
			cin >> x;
			if (x == 1)
				Gender = 0;
			if (x == 2) {
				Gender = 1;
				if (x != 1 && x != 2)
					Gender = 1;
			}
			homeaddress.set();
			phonenumber.setphone();
			cout << "Enter an id please:\n " << endl;
			string st;
			cin >> st;
			id = st;
			system("cls");
			time_t now = time(0);
			struct tm newtime;
			localtime_s(&newtime, &now);
			int year = 1900 + newtime.tm_year;
			age = year - birthDate.getyear();
			int d, m, y;
			localtime_s(&newtime, &now);
			y = 1900 + newtime.tm_year;
			d = newtime.tm_mday;
			m = newtime.tm_mon;
			accepted.set(d, m, y);
			system("cls");
			sickness.setsickness();
			system("cls");
			cout << "enter presctiption:\n";
			getline(cin, prescription);
			allergies.setallergies();
			system("cls");
			cin.ignore();
			p.setname(name);
			p.setbirth(birthDate);
			p.setgender(Gender);
			p.setaddress(homeaddress);
			p.setphone(phonenumber);
			p.setidbydef(id);
			p.setage(age);
			p.setacc(accepted);
			p.setsickness(sickness);
			p.setpriscrip(prescription);
			p.setallergies(allergies);
			ofile << left << ' ' << p.getname() << ' ' << p.getbirthDate() << ' ' << p.getGender() << ' ' << p.gethomeaddress() << ' ' << p.getphonenumber() << ' ' << p.getid() << ' ' << p.getage() << ' ' << p.getaccepted() << ' ' <<
				p.getsickness()  << p.getprescription() << ' ' << p.getallergies()<<endl;
		}
		if (x ==0) {
			ifstream inpatient("patients.txt", ios::in);
			if (!inpatient) {
				cerr << "File could not be opened." << endl;
				exit(1);
			}
			FullName name;//
				Date birthDate;
				bool Gender;
				Address homeaddress;
				Phone phonenumber;
				string id;
				int age;
				Date accepted;
				illness sickness;
				string prescription;
				Allergies allergies;
				patient p;
				
				string str;
				//inpatient >> name >> birthDate >> Gender >> homeaddress >> phonenumber >> id >> age >> accepted >> sickness >> prescription >> allergies;
			while (getline(inpatient, str)) {
				
				ofstream ostrr("temp.txt");
			ostrr << str;
			ostrr.close();
			ifstream instrr("temp.txt");
				instrr>> name >> birthDate >> Gender >> homeaddress >> phonenumber >> id >> age >> accepted >> sickness >> prescription >> allergies;
				p.setname(name);
				p.setbirth(birthDate); p.setgender(Gender); p.setaddress(homeaddress); p.setphone(phonenumber); p.setidbydef(id); p.setage(age); p.setacc(accepted);
				p.setsickness(sickness); p.setpriscrip(prescription); p.setallergies(allergies);
				p.printpatient();
				cout << endl;
				cout << "___________________________________________________________\n";
				instrr.close();

			}
			inpatient.close();
		}
	}
}
void showmenu() {
	cout << "1.Add staff to partucular department of hospital.\n";
	cout << "2.Add patient to hospital\n";
	cout << "3.Are you looking for a special employee?\n";
	cout << "4.Are you looking for a particular patient?\n";
	cout << "5.Enter date to see technical staffs.\n";
	cout << "6.Doctors who are sick\n";
	cout << "7.Surgeonian doctors\n";
	cout << "8.nurses who are sick\n";
	cout << "9.Patients who were admitted twice in hospital\n";
	cout << "10.search for id\n";

}
/**
void addpatient();
void addstaff();
void showmenu();
void outputline(ostream&, patient&);
void searchforid(ostream& output, patient& pp, string id);
int main() {
	int xx;
	
	while (true) {
		showmenu();
		cin >> xx;
		system("cls");
		if (xx == 2)
			addpatient();
		if (xx == 1)
			addstaff();
		if (xx == 10)
		{
			patient p;
			ifstream inpatient("patients.txt", ios::in);
			if (!inpatient) {
				cerr << "File could not be opened." << endl;
				exit(1);
			}
			string idsearch;
			cout << "enter id for search\n";
			cin >> idsearch;
			inpatient.read(reinterpret_cast <char*> (&p), sizeof(patient));
			while (inpatient && !inpatient.eof()) {
				searchforid(cout, p,idsearch);
				inpatient.read(reinterpret_cast <char*> (&p), sizeof(patient));
			}
		}
		if (xx == 0)
			break;
	}
	
	patient p;
	cout << "patient information from file is:\n";
	cout << endl << left<<setw(2)<<"name"<<setw(2)<<"birthdate"<<setw(2)<<"Gender"<<setw(2)<<"homeaddress"<<setw(2)<<"phonenumber"<<setw(2)<<"id"<<setw(2)<<"age"<<setw(2)<<"accepted"<<setw(2)<<"sickness"<<setw(2)
		<<"prescription"<<setw(10)<<"allergies\n\n";
	ifstream inpatient("patients.txt", ios::in);
	if (!inpatient) {
		cerr << "File could not be opened." << endl;
		exit(1);
	}
	inpatient.read(reinterpret_cast <char*> (&p), sizeof(patient));
	while (inpatient && !inpatient.eof()) {
		outputline(cout, p);
		inpatient.read(reinterpret_cast <char*> (&p), sizeof(patient));
	}
	cin.get();
}
void outputline(ostream& output,  patient& pp) {
	output << left << setw(2) << pp.getname() << setw(2) << pp.getbirthDate() << setw(2) << pp.getGender() << setw(2) << pp.gethomeaddress() << setw(2) << pp.getphonenumber() << setw(2) << pp.getid() << setw(2) << pp.getage() << setw(2) << pp.getaccepted() << setw(2) <<
		pp.getsickness() << setw(2) << pp.getprescription() << setw(2) << pp.getallergies() << endl;
}
void searchforid(ostream& output, patient& pp,string id) {
	if (pp.getid() == id)
		outputline(output, pp);
}
void showmenu() {
	cout << "1.Add staff to partucular department of hospital.\n";
	cout << "2.Add patient to hospital\n";
	cout << "3.Are you looking for a special employee?\n";
	cout << "4.Are you looking for a particular patient?\n";
	cout << "5.Enter date to see technical staffs.\n";
	cout << "6.Doctors who are sick\n";
	cout << "7.Surgeonian doctors\n";
	cout << "8.nurses who are sick\n";
	cout << "9.Patients who were admitted twice in hospital\n";
	cout << "10.search for id\n";

}
void addpatient() {
	FullName name;//
	Date birthDate;//
	bool Gender = 0;//
	Address homeaddress;
	Phone phonenumber;
	string id;
	int age;
	Date accepted;
	illness sickness;
	string prescription;
	Allergies allergies;
	ofstream ofile("patients.txt", ios::app);
	if (!ofile) {
		cerr << "file could not be open\n";
		cin.get();
		exit(1);
	}
	patient p;
	system("cls");
		name.setfullname();
		birthDate.setbirth();
		cout << "Choose your gender(1.male 2.female):\n";
		int x;
		cin >> x;
		if (x == 1)
			Gender = 0;
		if (x == 2) {
			Gender = 1;
			if (x != 1 && x != 2)
				Gender = 1;
		}
		homeaddress.set();
		phonenumber.setphone();
		cout << "Enter an id please:\n " << endl;
		string st;
		cin >> st;
		id = st;
		system("cls");
		time_t now = time(0);
		struct tm newtime;
		localtime_s(&newtime, &now);
		int year = 1900 + newtime.tm_year;
		age = year - birthDate.getyear();
		int d, m, y;
		localtime_s(&newtime, &now);
		y = 1900 + newtime.tm_year;
		d = newtime.tm_mday;
		m = newtime.tm_mon;
		accepted.set(d, m, y);
		system("cls");
		sickness.setsickness();
		system("cls");
		cout << "enter presctiption:\n";
		getline(cin, prescription);
		allergies.setallergies();
		system("cls");
		cin.ignore();
		p.setname(name);
		p.setbirth(birthDate);
		p.setgender(Gender);
		p.setaddress(homeaddress);
		p.setphone(phonenumber);
		p.setidbydef(id);
		p.setage(age);
		p.setacc(accepted);
		p.setsickness(sickness);
		p.setpriscrip(prescription);
		p.setallergies(allergies);
		ofile.write(reinterpret_cast <char*> (&p), sizeof(patient));
	ofile.close();
}
void addstaff() {
	FullName name;//
	Date birthDate;//
	bool Gender = 0;//
	Address homeaddress;
	Phone phonenumber;
	Date joined;//
	Education educ;//
	Certification certif;
	Languages languages;
	Tecnicalstaff technicalstaff;
	AdministrativeStaff admin;
	OperationsStaff operationstaff;
	ofstream ofile("staff.dat", ios::app);
	if (!ofile) {
		cerr << "file could not be open\n";
		cin.get();
		exit(1);
	}
	Staff p;
	system("cls");
	name.setfullname();
	birthDate.setbirth();
	cout << "Choose your gender(1.male 2.female):\n";
	int x;
	cin >> x;
	if (x == 1)
		Gender = 0;
	if (x == 2) {
		Gender = 1;
		if (x != 1 && x != 2)
			Gender = 1;
	}
	homeaddress.set();
	phonenumber.setphone();
	int d, m, y;
	time_t now = time(0);
	struct tm newtime;
	localtime_s(&newtime, &now);
	y = 1900 + newtime.tm_year;
	d = newtime.tm_mday;
	m = newtime.tm_mon;
	joined.set(d, m, y);
	educ.seteducation();
	system("cls");
	certif.setcer();
	system("cls");
	languages.setlang();
	system("cls");
	cout << "Are you 1.Tecnicalstaff , 2.AdministrativeStaff or 3.OperationsStaff ?(entr number)\n";
	cin >> x;
	if (x == 1)
		technicalstaff.setTecnicalstaff();
	if (x == 2)
		admin.setAdministrativeStaff();
	if (x == 3)
		operationstaff.setop();
	cin.ignore();
	p.setname(name);
	p.setbirth(birthDate);
	p.setgender(Gender);
	p.setaddress(homeaddress);
	p.setphone(phonenumber);
	p.setjoined(joined);
	p.seteducation(educ);
	p.setcertification(certif);
	p.setlanguage(languages);
	p.setdtechnicalstaff(technicalstaff);
	p.setadd(admin);
	p.setopp(operationstaff);
	ofile.write(reinterpret_cast <char*> (&p), sizeof(Staff));
	ofile.close();
}*/