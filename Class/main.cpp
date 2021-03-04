#include<iostream>
#include "gradeBook.h"
#include "account.h"
using namespace std;

//main function 
void main() 
{

	gradeBook myobje("Olcme ve Enstrumantasyon", "Hayriye Korkmaz");
	myobje.displayMessage();

	cout << "-----------------------------------------------------------------------" << endl
		<< "Birinci Hesap: Furkan Coskun\n" << endl;

	hesap hesap1(0);
	hesap1.setHesap(-10);
	hesap1.printHesap();

	cout << "-----------------------------------------------------------------------" << endl
		<< "Ikinci Hesap: Firdevs Coskun\n" << endl;

	hesap hesap2(40);
	hesap2.printHesap();
	hesap2.ekleHesap(20);
	hesap2.printHesap();
	hesap2.cekHesap(50);
	hesap2.printHesap();
	hesap2.cekHesap(50);
	hesap2.printHesap();

}