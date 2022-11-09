/*Napišite program koji s tipkovnice učitava jedan cijeli broj te ispisuje je li on djeljiv s 3 ili 6. 
Inače ispisuje poruku “ Ucitani broj nije djeljiv niti s 3 niti s 6”.*/

#include <iostream>
using namespace std;

int main() {

	int broj;
	
	cout << "Upisite broj > ";
	cin >> broj;
	
	if (broj % 3 == 0) {
	    cout << "Broj je djeljiv s 3." << endl;
	} 
	if (broj % 6 == 0) {
	    cout << "Broj je djeljiv s 6." << endl;
	} 
	if (broj % 3 != 00 && broj % 6 != 0) {
	    cout << "Broj nije djeljiv ni s 3 ni s 6." << endl;
	}
	
	return 0;
}
