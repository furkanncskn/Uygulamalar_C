#pragma once
#include <iostream>

class sifreCoz {
private:
	unsigned int cozulenMesaj;
	double gelenBirinciBasamak;
	double gelenIkinciBasamak;
	double gelenUcuncuBasamak;
	double gelenDorduncuBasamak;
public:
	sifreCoz(double,double,double,double);
	void setBirinciBasamak(double);
	void setIkinciBasamak(double);
	void setUcuncuBasamak(double);
	void setDorduncuBasamak(double);
	int getBirinciBasamak() const;
	int getIkinciBasamak() const;
	int getUcuncuBasamak() const;
	int getDorduncuBasamak() const;
	void cozSifre();
	void printMesajSifrele();
};
