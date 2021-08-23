#include "peoplelist.h"
using namespace std;

peoplelist::peoplelist(string filePath) {
	ifstream peoplefile(filePath);
	string lineContents;

	while (!peoplefile.eof()) {
		getline(peoplefile, lineContents);
		peoplee.push_back(People(lineContents));
	}
	peoplefile.close();
}


vector<People> peoplelist::getpeople() {
	return this->peoplee;
}