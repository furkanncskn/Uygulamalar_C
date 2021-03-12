#pragma once
#include <iostream>

class nufusArtis {
private:
	int artis=0;
	double guncelNufus;
	unsigned int guncelYil;
	double beklenenArtis=0;
public:
	nufusArtis(double, unsigned int);
	~nufusArtis();
	void setYillikDunyaNufus(double);
	void setYil(unsigned int);
	void setBeklenenYillikArtis(double);
	double getYillikDunyaNufus() const;
	unsigned int getYil() const;
	double getBeklenenYillikArtis() const;
	void printNufusArtis();
};
