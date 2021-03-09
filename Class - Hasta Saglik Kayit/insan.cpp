#include <iostream>
#include "insan.h"

using namespace std;

insan::insan() {
	cout << "Default insan constructor cagirildi!" << endl;
	isim = "";
	soyisim = "";
}

insan::insan(std::string isim, std::string soyisim) {
	setIsim(isim);
	setSoyIsim(soyisim);
}

void insan::setIsim(std::string isim) {
	this->isim = isim;
}

void insan::setSoyIsim(std::string soyisim) {
	this->soyisim = soyisim;
}

std::string insan::getIsim() {
	return isim;
}

std::string insan::getSoyIsim() {
	return soyisim;
}

void insan::printInsan() {
	cout << "Isim: " << getIsim() << "\n" << "Soyisim: " << getSoyIsim() << endl;
}