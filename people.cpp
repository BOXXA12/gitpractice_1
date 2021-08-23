#include "people.h"

using namespace std;


People::People(string peopleinformation) {
	stringstream peopleStream(peopleinformation);
	peopleStream >> this->id;
	peopleStream >> this->survived;
	peopleStream >> this->clas;
	peopleStream >> this->name;
	peopleStream >> this->sex;
	peopleStream >> this->age;
	peopleStream >> this->a;
	peopleStream >> this->b;
	peopleStream >> this->ticket;
	peopleStream >> this->ticketcost;
	peopleStream >> this->place;
	peopleStream >> this->set;
}


int People::getid() {
	return this->id;
}
bool People::issurvived() {
	return this->survived;
}
int People::getclass() {
	return this->clas;
}
std::string People::getname() {
	return this->name;
}
std::string People::getsex() {
	return this->sex;
}
double People::getage(){
	return this->age;
}
int People::geta() {
	return this->a;
}
int People::getb() {
	return this->b;
}
std::string People::getticket() {
	return this->ticket;
}
double People::getticketcost() {
	return this->ticketcost;
}
std::string People::getplace() {
	return this->place;
}
std::string People::getset() {
	return this->set;
}