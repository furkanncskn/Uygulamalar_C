#include <iostream>
#include "BMI.h"

using namespace std;

BMI::BMI() {
	cout << "Default BMI cagirildi" << endl;
	boy = 0;
	kilo = 0;
}

BMI::BMI(double boy, double kilo) {
	setBoy(boy);
	setKilo(kilo);
}

void BMI::setKilo(double kilo) {
	if (kilo > 0) this->kilo = kilo;
	else cerr << "Gecersiz kilo girisi!" << endl;
}

void BMI::setBoy(double boy) {
	if (boy > 0) this->boy = boy;
	else cerr << "Gecersiz boy girisi!" << endl;
}

double BMI::getKilo() {
	return kilo;
}

double BMI::getBoy() {
	return boy;
}

void BMI::printBMI() {
	float vucutKitleEndeksi;
	vucutKitleEndeksi = kilo / (boy * boy);
	cout << "Vucut Kitle Endeksi: " << vucutKitleEndeksi;

	if (vucutKitleEndeksi > 0 && vucutKitleEndeksi <= 18.4) cout << "  -> Ideal kilonuzun altindasiniz" << endl;
	if (vucutKitleEndeksi > 18.4 && vucutKitleEndeksi <= 24.9) cout << "  -> Ideal kilonuzdasiniz" << endl;
	if (vucutKitleEndeksi > 24.9 && vucutKitleEndeksi <= 29.9) cout << "  -> Ideal kilonuzun ustundesiniz" << endl;
	if (vucutKitleEndeksi > 29.9) cout << "  -> Obezsiniz :(" << endl;

}