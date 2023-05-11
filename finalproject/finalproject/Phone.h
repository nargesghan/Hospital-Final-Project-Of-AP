#pragma once
#include<iostream>
#include<string>
using namespace std;
class Phone {
	string number;
public:
    friend ostream& operator <<(ostream& os, const Phone& dt);
    friend istream& operator>>(istream& is, Phone& dt);
   void  setPhone(string x) {
        char msg3[] = "mobile number is not 11 digits";
        char msg4[] = " mobile number does not start with 0";

        try {
            if (x.length() == 11 && x[0] == '0')
                number = x;
            if (x.length() != 11)
                throw msg3;
            if (x[0] != '0')
                throw msg4;
        }
        catch (char msg[]) {
            cout << msg << endl;
        }
    }
	Phone() {
		number ="";
	}
	void setphone() {
		cout << "enter  phonenumber:\n";
        string x;
        cin >> x;
        char msg3[] = "mobile number is not 11 digits";
        char msg4[] = " mobile number does not start with 0";

        try {
            if (x.length() == 11 && x[0] == '0')
                number = x;
            if (x.length() != 11)
                throw msg3;
            if (x[0] != '0')
                throw msg4;
        }
        catch (char msg[]) {
            cout << msg << endl;
        }
	}
    void print_phone() {
        cout << "phone number:";
        cout << number;
    }
};
