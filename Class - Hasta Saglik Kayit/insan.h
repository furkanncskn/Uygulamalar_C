#pragma once
#include <iostream>

class insan {
private:
	std::string isim;
	std::string soyisim;
public:
	insan();
	insan(std::string, std::string);
	void setIsim(std::string);
	void setSoyIsim(std::string);
	std::string getIsim();
	std::string getSoyIsim();
	void printInsan();
};