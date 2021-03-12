#include <iostream>
#include "hanoi.h"
using namespace std;


void main() {
	
	hanoiKuleleri* ptrHanoi1 = new hanoiKuleleri(7, 1, 3, 2);
	delete ptrHanoi1;
	hanoiKuleleri hanoiKuleleri1(6, 1, 3, 2);

}
