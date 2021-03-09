#include <iostream>
#include "sifreCoz.h"

using namespace std;

sifreCoz::sifreCoz(double gelenBirinci,double gelenIkinci,double gelenUcuncu,double gelenDorduncu) {
	setBirinciBasamak(gelenBirinci);
	setIkinciBasamak(gelenIkinci);
	setUcuncuBasamak(gelenUcuncu);
	setDorduncuBasamak(gelenDorduncu);
	cozSifre();
	printMesajSifrele();
}

void sifreCoz::setBirinciBasamak(double gelenBirinci) {
	gelenBirinciBasamak = (gelenBirinci * 10) - 7;
}

void sifreCoz::setIkinciBasamak(double gelenIkinci) {
	gelenIkinciBasamak = (gelenIkinci * 10) - 7;
}

void sifreCoz::setUcuncuBasamak(double gelenUcuncu) {
	gelenUcuncuBasamak = (gelenUcuncu * 10) - 7;
}

void sifreCoz::setDorduncuBasamak(double gelenDorduncu) {
	gelenDorduncuBasamak = (gelenDorduncu * 10) - 7;
}

int sifreCoz::getBirinciBasamak() const {
	return gelenBirinciBasamak;
}

int sifreCoz::getIkinciBasamak() const {
	return gelenIkinciBasamak;
}

int sifreCoz::getUcuncuBasamak() const {
	return gelenUcuncuBasamak;
}

int sifreCoz::getDorduncuBasamak() const {
	return gelenDorduncuBasamak;
}

void sifreCoz::cozSifre() {
	unsigned temp = gelenBirinciBasamak;
	gelenBirinciBasamak = gelenUcuncuBasamak;
	gelenUcuncuBasamak = temp;

	temp = gelenIkinciBasamak;
	gelenIkinciBasamak = gelenDorduncuBasamak;
	gelenDorduncuBasamak = temp;
}

void sifreCoz::printMesajSifrele() {
	cout << "Gelen mesaj: " << gelenDorduncuBasamak << gelenUcuncuBasamak
		<< gelenIkinciBasamak << gelenBirinciBasamak << endl;
}