#pragma once
#include <iostream>

class hanoiKuleleri {
private:
	int minHamle = 0;
	int tasinacakDiskSayisi;
	int ilkCubuk;
	int sonCubuk;
	int araCubuk;
public:
	hanoiKuleleri(int,int,int,int);
	~hanoiKuleleri();
	void setTasinacakDiskSayisi(int);
	void setIlkCubuk(int);
	void setSonCubuk(int);
	void setAraCubuk(int);
	int getTasinacakDiskSayisi();
	int getIlkCubukSayisi();
	int getSonCubukSayisi();
	int getAraCubukSayisi();
	void cozHanoiKuleleri(int,int,int,int);
	void printHanoiKuleleri();
};

