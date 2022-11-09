/*Napišite program koji učitava redni broj dana u tjednu (1-7), te ispisuje puni naziv dana.*/

#include <iostream>
using namespace std;

int main() {

	int redniBrojDana;
	
	cout << "Unesite redni broj dana u tjednu > ";
	cin >> redniBrojDana;
	
	switch (redniBrojDana) {
	    case 1:
	       cout << "Ponedjeljak.";
	       break;
	    case 2:
	       cout << "Utorak.";
	       break;
	    case 3:
	       cout << "Srijeda.";
	       break;
	    case 4:
	       cout << "Cetvrtak.";
	       break;
	    case 5:
	       cout << "Petak.";
	       break;
	    case 6:
	       cout << "Subota.";
	       break;
	    case 7:
	       cout << "Nedjelja.";
	       break;
	    default:
	       cout << "Neispravan redni broj.";
	       break;
	}
	
	return 0;
}
