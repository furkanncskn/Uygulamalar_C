#include <iostream>
#include "NufusArtis.h"
using namespace std;

int nufusArtis::artis = 0;
unsigned int nufusArtis::guncelNufus = 0;
unsigned int nufusArtis::beklenenArtis = 0;
unsigned int nufusArtis::guncelYil = 0;
double nufusArtis::artisOrani = 0;

nufusArtis::nufusArtis(unsigned int guncelNufus, unsigned int guncelYil) {
	cout << "-------------------------NUFUS ARTIS--------------------------" << endl;
	cout << "Yil" << "\t\t" << "Nufus" << "\t\t" << "Beklenen Artis" << endl;
	for (int i = 0; i < 75; i++) {
		guncelNufus = (guncelNufus + getBeklenenYillikArtis());
		setBeklenenYillikArtis(guncelNufus);
		setYillikDunyaNufus(guncelNufus);
		setYil(guncelYil);
		printNufusArtis();
		artis++;
		
	}
}

nufusArtis::~nufusArtis() {
	cout << this << "Destructor is called" << endl;
}

void nufusArtis::setYillikDunyaNufus(unsigned int guncelNufus) {
	this->guncelNufus = guncelNufus;
}

void nufusArtis::setYil(unsigned int guncelYil) {
	this->guncelYil = guncelYil + artis;
}

void nufusArtis::setBeklenenYillikArtis(unsigned int guncelNufus) {
	this->beklenenArtis = guncelNufus * 1.1 /100;
}

unsigned int nufusArtis::getYillikDunyaNufus() const {
	return guncelNufus;
}

unsigned int nufusArtis::getYil() const {
	return guncelYil;
}

double nufusArtis::getBeklenenYillikArtis() const {
	return beklenenArtis;
}

void nufusArtis::printNufusArtis() {
	cout << getYil() << "          " << getYillikDunyaNufus() << "          " << getBeklenenYillikArtis() << endl;
}
