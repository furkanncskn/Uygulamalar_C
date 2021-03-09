#include <iostream>
#include "hasta.h"

using namespace std;

int hasta::hastaSayi = 0;

hasta::hasta() {
	cout << "Default hasta constructor cagirildi!" << endl;
	girisTarihiGun = 0;
	girisTarihiAy = 0;
	girisTarihiYil = 0;
	hastaSayi++;
}

hasta::hasta(int gun, int ay, int yil, std::string isim, std::string soyisim, int dGun, int dAy, int dYil, double boy, double kilo)
	:insan(isim, soyisim), nabiz(dGun, dAy, dYil), BMI(boy, kilo)
{
	setGirisGun(gun);
	setGirisAy(ay);
	setGirisYil(yil);
	hastaSayi++;
}

void hasta::setGirisGun(int gun) {
	if (gun >= 1 && gun <= 31) this->girisTarihiGun = gun;
	else cerr << "Gecersiz gun girisi!" << endl;
}

void hasta::setGirisAy(int ay) {
	if (ay <= 12 && ay >= 1) this->girisTarihiAy = ay;
	else cerr << "Gecersiz ay girisi!" << endl;
}

void hasta::setGirisYil(int yil) {
	if (yil <= 2021 && yil >= 1800) this->girisTarihiYil = yil;
	else cerr << "Gecersiz yil girisi!" << endl;
}

int hasta::getGirisGun() {
	return girisTarihiGun;
}

int hasta::getGirisAy() {
	return girisTarihiAy;
}

int hasta::getGirisYil() {
	return girisTarihiYil;
}

void hasta::printHasta() {
	cout << "--------------------------------------HASTA KAYIT--------------------------------------" << endl;
	cout << hastaSayi << "." << "Hasta ";
	cout << "Giris Tarihi: " << getGirisGun() << " / " << getGirisAy() << " / " << getGirisYil() << endl;
	printInsan();
	printNabiz();
	printBMI();
}