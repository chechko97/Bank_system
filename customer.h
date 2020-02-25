#pragma once
#include <iostream>
using namespace std;

class Customer
{
private:
	int id;
	string name;
	string address;
public:
	Customer();
	Customer(int id, string name, string address);
	int getId() const;
	string getName() const;
	string getAddress() const;

	virtual void display() const;

};