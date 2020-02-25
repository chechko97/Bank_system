#include <iostream>
#include "customer.h"
#include <string>

using namespace std;

Customer::Customer() : id(0) {
	name = "";
	address = "";
};

Customer::Customer(int id, string name, string address)
{
	this->id = id;
	this->name = name;
	this->address = address;
}

int Customer::getId() const
{
	return id;
}

string Customer::getName() const
{
	return name;
}

string Customer::getAddress() const
{
	return address;
}

void Customer::display() const
{
	cout << "id : " << getId() << endl;
	cout << "name : " << getName() << endl;
	cout << "address : " << getAddress() << endl;
}
