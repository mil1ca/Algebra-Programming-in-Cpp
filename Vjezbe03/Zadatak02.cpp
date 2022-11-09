/*Napišite program koji s tipkovnice učitava jedan cijeli broj te ispisuje je li on djeljiv sa 3 ili sa 6. 
Inače ispisuje poruku “ Ucitani broj nije djeljiv niti sa 3 niti sa 6”.*/

#include <iostream>
using namespace std;

int main() {

	int broj;
	
	cout << "Upisite broj > ";
	cin >> broj;
	
	if (broj % 3 == 0) {
	    cout << "Broj je djeljiv sa 3." << endl;
	} 
	if (broj % 6 == 0) {
	    cout << "Broj je djeljiv sa 6." << endl;
	} 
	if (broj % 3 != 00 && broj % 6 != 0) {
	    cout << "Broj nije djeljiv ni sa 3 ni sa 6." << endl;
	}
	
	return 0;
}
