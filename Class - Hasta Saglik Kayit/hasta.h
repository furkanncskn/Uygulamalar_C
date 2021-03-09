#pragma once
#include "BMI.h"
#include "insan.h"
#include "nabiz.h"

class hasta :public insan, public nabiz, public BMI {

private:
	static int hastaSayi;
	int girisTarihiGun;
	int girisTarihiAy;
	int girisTarihiYil;
public:
	hasta();
	hasta(int, int, int, std::string, std::string, int, int, int, double, double);
	void setGirisGun(int);
	void setGirisAy(int);
	void setGirisYil(int);
	int getGirisGun();
	int getGirisAy();
	int getGirisYil();
	void printHasta();

};