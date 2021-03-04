#pragma once
#include <iostream>

//hesap nesnemizin uye fonksiyonlarini(member functions) ve uye degiskenlerini(member variables) belirledik.
class hesap {
private:
	int hesapBakiyesi;
public:
	hesap(int);
	void setHesap(int);
	int getHesap();
	void printHesap();
	void ekleHesap(int);
	void cekHesap(int);
};

