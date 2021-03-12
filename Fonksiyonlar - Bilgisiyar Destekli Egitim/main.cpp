#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;
int carpimSonuc=0;
int kullaniciCevap=-1;
int dogruCevap = 0;
int yanlisCevap = 0;

void rastgeleSayiOlustur() {
	srand(static_cast<int>(time(0)));
	int x = 1 + rand() % 10;
	int y = 1 + rand() % 10;
	cout << x << " x " << y << " ?" << endl;
	carpimSonuc = x * y;
}

void cevapAl() {
	rastgeleSayiOlustur();
	cout << "Cevabiniz: ";
	cin >> kullaniciCevap;
}

void printSonuc() {
	cevapAl();
	if (kullaniciCevap == carpimSonuc) {
		cout << "Tebrikler dogru cevap :))" << endl;
		dogruCevap++;
	}
	else {
		cout << "Cevabiniz yanlis tekrar deneyin :((" << endl;
		yanlisCevap++;
	}
}

void carpim() {
	printSonuc();
}

void basariOrani() {	
	cout << "Dogru cevap sayisi: " << dogruCevap << endl;
	cout << "Yanlis cevap sayisi: " << yanlisCevap << endl;
	
	int toplamSoru = dogruCevap + yanlisCevap;
	
	double basariOrani;
	basariOrani = static_cast<double>(dogruCevap) * 100;
	basariOrani = basariOrani / static_cast<double>(toplamSoru);
	cout << "Basari oraniniz: " << basariOrani << endl;
}

void main() {

	int i = 0;

	while (i<3) {
		carpim();
		cout << "-----------------------------------" << endl;
		i++;
	}

	basariOrani();
	

}