/*Potrebno je ispisati djelitelje odabranog prirodnog broja. Po unosu broja treba provjeriti da li je uneseni broj prirodan, ako nije valja ponoviti unos.*/

#include <iostream>
using namespace std;

int main(void) {
    
    int prirodniBroj;
    
	do {
	    cout << "Unesite prirodan broj > ";
	    cin >> prirodniBroj;
	} while (prirodniBroj < 0);
	
	cout << "Djelitelji broja " << prirodniBroj << " su: ";
	for (int i = 1; i <= prirodniBroj; i++) {
	    if (prirodniBroj % i == 0) {
	        cout << i << " ";
	    }
	}
	
	cout << endl;
	
	return 0;
}
