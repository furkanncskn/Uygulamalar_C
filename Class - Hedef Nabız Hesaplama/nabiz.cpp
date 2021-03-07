#include "nabiz.h"
using namespace std;

nabiz::nabiz() {
	cout << "Default constructor is called" << endl;
}

nabiz::nabiz(std::string isim, std::string soyisim, int gun, int ay, int yil) {
	setIsim(isim);
	setSoyIsim(soyisim);
	setGun(gun);
	setAy(ay);
	setYil(yil);
}

void nabiz::setIsim(std::string isim) {
	this->isim = isim;
}

void nabiz::setSoyIsim(std::string soyisim) {
	this->soyisim = soyisim;
}

void nabiz::setGun(int gun) {
	if (gun >= 1 && gun <= 31) this->dogumTarihiGun = gun;
	else cerr << "Gecersiz gun girisi!" << endl;
}

void nabiz::setAy(int ay) {
	if (ay <= 12 && ay >= 1) this->dogumTarihiAy = ay;
	else cerr << "Gecersiz ay girisi!" << endl;
}

void nabiz::setYil(int yil) {
	if (yil <= 2021 && yil >= 1800) this->dogumTarihiYil = yil;
	else cerr << "Gecersiz yil girisi!" << endl;
}

std::string nabiz::getIsim() {
	return isim;
}

std::string nabiz::getSoyIsim() {
	return soyisim;
}

int nabiz::getGun() {
	return dogumTarihiGun;
}

int nabiz::getAy() {
	return dogumTarihiAy;
}

int nabiz::getYil() {
	return dogumTarihiYil;
}

int nabiz::getYas() {
	int yas = 2021 - dogumTarihiYil;
	return yas;
}

void nabiz::getHedefNabiz() {
	float alt_aralik = 0.5 * getMaksimumNabiz();
	float ust_aralik = 0.8 * getMaksimumNabiz();

	cout << "Hedeflenen alt aralik: " << alt_aralik << "\n" << "Hedeflenen ust aralik: " << ust_aralik << endl;
}	

int nabiz::getMaksimumNabiz() {
	int maxNabiz = 220 - getYas();
	return maxNabiz;
}