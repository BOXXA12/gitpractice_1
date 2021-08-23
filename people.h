#pragma once
#include <iostream>
#include <sstream>


class People
{
	int id;
	bool survived;
	int clas;
	std::string name;
	std::string sex;
	double age;
	int a;
	int b;
	std::string ticket;
	double ticketcost;
	std::string place;
	std::string set;

public:
	People(std::string peopleinformation);
	
	int getid();
	bool issurvived();
	int getclass();
	std::string getname();
	std::string getsex();
	double getage();
	int geta();
	int getb();
	std::string getticket();
	double getticketcost();
	std::string getplace();
	std::string getset();
};


