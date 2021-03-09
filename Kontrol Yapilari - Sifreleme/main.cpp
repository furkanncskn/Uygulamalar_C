#include <iostream>
#include "mesajSifrele.h"
#include "sifreCoz.h"

using namespace std;

void main() {
	mesajSifrele mesaj1(1996);
	sifreCoz sifreliMesaj1(mesaj1.getBirinciBasamak(), mesaj1.getIkinciBasamak(), mesaj1.getUcuncuBasamak(), mesaj1.getDorduncuBasamak());
}