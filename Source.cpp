#include<iostream>
#include<algorithm>
#include<vector>
#include"people.h"
#include"peoplelist.h"
using namespace std;

void showpeople(People p) {
	cout << "id: " << p.getid() << "	" << "survived: " << p.issurvived() << "	" << "ticket class: " << p.getclass() << "	" << "name: " << p.getname() << "	" << "sex: " << p.getsex() << "	" << "age: " << p.getage();
	cout << "	" << "yonger family members: " << p.geta() << "	" << " older family members: " << p.getb() << "	" << "ticket number: " << p.getticket() << "	" << "ticket cost: " << p.getticketcost() << "	" << "place during sinking:" << p.getplace() << "	" << "boarding:" << p.getset() << " " << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}


int main() {
	peoplelist p1("C:\\Users\\student\\Desktop\\titanic_passenger_2.csv");
	for (auto p : p1.getpeople())
	{
		showpeople(p);
	}

}
