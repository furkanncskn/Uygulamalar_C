#include <iostream>
#include <iomanip>
#include "NufusArtis.h"
using namespace std;

nufusArtis::nufusArtis(double guncelNufus, unsigned int guncelYil) {
	cout << "-------------------------NUFUS ARTIS--------------------------" << endl;
	cout << this << " --> Constructor is called" << endl;
	cout << setw(25) << left << "Yil" << setw(25) << left << "Nufus" << setw(25) << left << "Beklenen Artis" << endl;
	for (int i = 0; i < 75; i++) {
		guncelNufus = (guncelNufus + getBeklenenYillikArtis());
		setBeklenenYillikArtis(guncelNufus);
		setYillikDunyaNufus(guncelNufus);
		setYil(guncelYil);
		printNufusArtis();
		artis++;		
	}
	cout << "---------------------------------------------------------------" << endl;
}

nufusArtis::~nufusArtis() {
	cout << this << " --> Destructor is called" << endl;
}

void nufusArtis::setYillikDunyaNufus(double guncelNufus) {
	this->guncelNufus = guncelNufus;
}

void nufusArtis::setYil(unsigned int guncelYil) {
	this->guncelYil = guncelYil + artis;
}

void nufusArtis::setBeklenenYillikArtis(double guncelNufus) {
	this->beklenenArtis = guncelNufus * 1.1 /100;
}

double nufusArtis::getYillikDunyaNufus() const {
	return guncelNufus;
}

unsigned int nufusArtis::getYil() const {
	return guncelYil;
}

double nufusArtis::getBeklenenYillikArtis() const {
	return beklenenArtis;
}

void nufusArtis::printNufusArtis() {
	cout << setw(25) << left << fixed << getYil() << setw(25) << left << fixed << getYillikDunyaNufus() << setw(25) << left << fixed << getBeklenenYillikArtis() << endl;
}
