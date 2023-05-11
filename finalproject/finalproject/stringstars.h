#pragma once
#include<iostream>
#include<string>
using namespace std;
class Languages {
	bool Persian;
	bool English;
	bool Spanish;
	bool Chinese;
	bool Arabic;
	bool French;
	bool Swedish;
	bool Russian;
	bool Korean;
	bool Japanese;
	
public:
	friend ostream& operator <<(ostream& os, const Languages& dt);
	friend istream& operator>>(istream& is, Languages& dt);
	Languages() {
		Persian = 0; English = 0;  Spanish = 0; Chinese = 0; Arabic = 0; French = 0; Swedish = 0; Russian = 0; Korean = 0; Japanese = 0;
		
	}
	void setlang() {
		cout << "Please enter the number of lenguage you know:\n";
		cout << "1.Persian 2.English  3.Spanish 4.Chinese 5.Arabic 6.French 7.Swedish 8.Russian 9.Korean 10.Japanese\n";
		int x;
		cin >> x;
		if (x == 1)
			Persian = 1;
		if (x == 2)
			English = 1;
		if (x == 3)
			Spanish = 1;
		if (x == 4)
			Chinese = 1;
		if (x == 5)
			Arabic = 1;
		if (x == 6)
			French = 1;
		if (x == 7)
			Swedish = 1;
		if (x == 8)
			Russian = 1;
		if (x == 9)
			Korean = 1;
		if (x == 10)
			Japanese = 1;
		if (x < 1 || x>10){
			cout << "you entered wrong number .please try again\n";
			setlang();
	}
	}
};
