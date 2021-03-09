#include <iostream>
#include "mesajSifrele.h"
#include "sifreCoz.h"

using namespace std;
int veri;

void main() {


	cout << "Gondermek istediginiz 4 basamakli veriyi yaziniz: "; cin >> veri;

	mesajSifrele mesaj1(veri);
	sifreCoz sifreliMesaj1(mesaj1.getBirinciBasamak(), mesaj1.getIkinciBasamak(), mesaj1.getUcuncuBasamak(), mesaj1.getDorduncuBasamak());


	mesajSifrele * ptrMesaj = new mesajSifrele(2912);
	sifreCoz* ptrSifreCoz = new sifreCoz(ptrMesaj->getBirinciBasamak(), ptrMesaj->getIkinciBasamak(), ptrMesaj->getUcuncuBasamak(), ptrMesaj->getDorduncuBasamak());
	delete ptrMesaj,ptrSifreCoz;
}