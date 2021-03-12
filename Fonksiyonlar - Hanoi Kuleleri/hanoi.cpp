#include <iostream>
#include "hanoi.h"
using namespace std;

hanoiKuleleri::hanoiKuleleri(int tasinacakDisk, int ilkCubuk, int sonCubuk, int araCubuk) {
	setTasinacakDiskSayisi(tasinacakDisk);
	setIlkCubuk(ilkCubuk);
	setSonCubuk(sonCubuk);
	setAraCubuk(araCubuk);
	cozHanoiKuleleri(tasinacakDisk, ilkCubuk, sonCubuk, araCubuk);
	cout << "Minimum hamle sayisi: " << minHamle << endl;
}

hanoiKuleleri::~hanoiKuleleri() {
	cout << this << "--> Destructor is called!" << endl;
}

void hanoiKuleleri::setTasinacakDiskSayisi(int tasinacakDisk) {
	if (tasinacakDisk >= 0) tasinacakDiskSayisi = tasinacakDisk;
	else cerr << "Hatali deger girisi yaptiniz\a";
}

void hanoiKuleleri::setIlkCubuk(int ilkCubuk) {
	this->ilkCubuk = ilkCubuk;
}

void hanoiKuleleri::setSonCubuk(int sonCubuk) {
	this->sonCubuk = sonCubuk;
}

void hanoiKuleleri::setAraCubuk(int araCubuk) {
	this->araCubuk = araCubuk;
}

int hanoiKuleleri::getTasinacakDiskSayisi() {
	return tasinacakDiskSayisi;
}

int hanoiKuleleri::getIlkCubukSayisi() {
	return ilkCubuk;
}

int hanoiKuleleri::getSonCubukSayisi() {
	return sonCubuk;
}

int hanoiKuleleri::getAraCubukSayisi() {
	return araCubuk;
}

void hanoiKuleleri::cozHanoiKuleleri(int tasinacakDisk,int ilkCubuk,int sonCubuk,int araCubuk) {
	if (tasinacakDisk == 1) {
		cout << ilkCubuk << " -- > " << araCubuk << endl;
		minHamle++;
	}
	else {
		cozHanoiKuleleri(tasinacakDisk - 1, ilkCubuk, araCubuk, sonCubuk);
		cozHanoiKuleleri(1, ilkCubuk, sonCubuk, araCubuk);
		cozHanoiKuleleri(tasinacakDisk - 1, sonCubuk, ilkCubuk, araCubuk);
	}
}

void hanoiKuleleri::printHanoiKuleleri() {
	
}
