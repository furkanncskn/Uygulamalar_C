#include "account.h"
#include <iostream>

using namespace std;

//Constructor ile hesap nesnemiz kurulurken argumanlarimizi yolladik
hesap::hesap(int hesapMiktar = 0) {
	setHesap(hesapMiktar);
}

//Para miktarini degistirebilmek icin set fonksiyonu tanimladik
void hesap::setHesap(int hesapMiktar) {
	if (hesapMiktar >= 0) hesapBakiyesi = hesapMiktar;
	else cerr << "Lutfen gecerli bir deger giriniz!" << endl;
}

//Para miktarini alabilmek icin get fonksiyonumuzu tanimladik
int hesap::getHesap() {
	return hesapBakiyesi;
}

//Para miktarini yazdirabilmek icin get fonksiyonumuzu tanimladik
void hesap::printHesap() {
	cout << "Hesabinizda ki guncel para miktari: " << getHesap() << " TL " << endl;
}

//Hesaba para eklemesi yapabilmek icin ekleHesap fonksiyonu olusturuldu
void hesap::ekleHesap(int eklenen) {
	cout << "Hesaba eklenmek istenen para miktari: " << eklenen << endl;
	hesapBakiyesi += eklenen;
}

//Hesaptan para cekebilmek icin cekHesap fonksiyonu olusturuldu
void hesap::cekHesap(int cekilen) {
	cout << "Hesabtan cekilmek istenen para miktari: " << cekilen << endl;
	if (cekilen <= hesapBakiyesi) hesapBakiyesi -= cekilen;
	else cerr << "Hesabinizda ki para miktari girdiginiz tutar icin yetersizdir!" << endl;
}