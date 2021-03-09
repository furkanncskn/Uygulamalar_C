#pragma once
#include <iostream>

class BMI {
private:
	double kilo;
	double boy;
public: 
	BMI();
	BMI(double, double);
	void setKilo(double);
	void setBoy(double);
	double getKilo();
	double getBoy();
	void printBMI();
};
