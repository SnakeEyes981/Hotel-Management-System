#include<iostream>
#include<iostream>
#include<fstream>
#include<iostream>
#include<string>
#include "Customer.h"

using namespace std;


Customer::Customer()
	{	}
Customer::Customer(string _customerName , int& _customerID , string& _checkIn ,string& _checkOut):
	customerName(_customerName) , customerID(_customerID) , checkIn(_checkIn) , checkOut(_checkOut)
	{	}
	
void Customer::setCustomerName(string _customerName)
	{
		customerName = _customerName;
	}
string Customer::getCustomerName()
	{
		return customerName;
	}
void Customer::setCustomerID(int _customerID)
	{
		customerID = _customerID;
	}
int Customer::getCustomerID()
	{
		return customerID;
	}
void Customer::setCheckIn(string _checkIn)
	{
		checkIn = _checkIn;
	}
string Customer::getCheckIn()
	{
		return checkIn;
	}
void Customer::setCheckOut(string _checkOut)
	{
		checkOut = _checkOut;
	}
string Customer::getCheckOut()
	{
		return checkOut;
	}
