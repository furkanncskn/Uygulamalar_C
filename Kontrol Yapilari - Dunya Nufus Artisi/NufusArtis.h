#pragma once
#include <iostream>

class nufusArtis {
private:
	static int artis;
	static unsigned int guncelNufus;
	static unsigned int guncelYil;
	static unsigned int beklenenArtis;
	static double artisOrani;
public:
	nufusArtis(unsigned int, unsigned int);
	~nufusArtis();
	void setYillikDunyaNufus(unsigned int);
	void setYil(unsigned int);
	void setBeklenenYillikArtis(unsigned int);
	unsigned int getYillikDunyaNufus() const;
	unsigned int getYil() const;
	double getBeklenenYillikArtis() const;
	void printNufusArtis();
};
