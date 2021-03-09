#include <iostream>
#include "BMI.h"
#include "nabiz.h"
#include "insan.h"
#include "hasta.h"

using namespace std;

void main() {

	int cikis = 0;
	string kontrol = "";
	int girisGun;
	int girisAy;
	int girisYil;
	string isim;
	string soyIsim;
	int dogumGun;
	int dogumAy;
	int dogumYil;
	double boy;
	double kilo;

		cout << "Coskunlar Hastaneye Hosgeldiniz :))" << endl;

		cout << "Lutfen hasta bilgilerini giriniz\n\n";

		cout << "Hastaneye giris tarihini gun ay yil seklinde giriniz: ";
		cin >> girisGun >> girisAy >> girisYil;

		cout << "Isim: "; cin >> isim; cout << "Soyisim: "; cin >> soyIsim;

		cout << "Dogum tarihini gun ay yil seklinde giriniz: ";
		cin >> dogumGun >> dogumAy >> dogumYil;

		cout << "Boy: "; cin >> boy; cout << "Kilo: "; cin >> kilo;

		hasta myHasta(girisGun, girisAy, girisYil, isim, soyIsim, dogumGun, dogumAy, dogumYil, boy, kilo);
		myHasta.printHasta();
}