#include <iostream>
#include "nabiz.h"
using namespace std;

void main() 
{
	
	nabiz myNabiz("Furkan", "Coskun", 30, 5, 1996);

	cout << "Isim: " << myNabiz.getIsim() << "\nSoyisim: " << myNabiz.getSoyIsim() << endl;
	cout << "Dogum Tarihi: " << myNabiz.getGun() << "/" << myNabiz.getAy() << "/" << myNabiz.getYil() << endl;
	cout << "Yas: " << myNabiz.getYas() << endl;
	cout << "Maksimum nabiz: " << myNabiz.getMaksimumNabiz() << endl;
	myNabiz.getHedefNabiz();

}