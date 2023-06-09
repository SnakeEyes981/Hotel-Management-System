#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<ctime>
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Customer: public Hotel, public Room{

	char customerName;
	int customerID;
	char checkIn;
	char checkOut;
	public:
		Customer();
		Customer(string _customerName , int& _customerID , string& _checkIn ,string& _checkOut);
		void setCustomerName(string _customerName);
		string getCustomerName();
		void setCustomerID(int _customerID);
		int getCustomerID();
		void setCheckIn(string _checkIn);
		string getCheckIn();
		void setCheckOut(string _checkOut);
		string getCheckOut();
};

#endif
