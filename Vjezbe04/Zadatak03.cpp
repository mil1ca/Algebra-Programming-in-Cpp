/*Napišite program koji za učitani cijeli broj računa te ispisuje njemu obrnuti broj pomnožen s dva (npr. za učitani broj 123 treba ispisati 642).*/

#include <iostream>
using namespace std;

int main(void) {

	int broj, okrenutiBroj = 0, rezultat;
	
	cout << "Unesite broj > ";
	cin >> broj;
	cout << "Ucitani broj: " << broj << endl;
	
	while (broj > 0) {
	    okrenutiBroj = (okrenutiBroj * 10) + (broj % 10); 
	    broj /= 10;
	}
	rezultat = okrenutiBroj * 2;
	
	cout << "Obrnuti broj pomnozen s 2: " << rezultat << endl;

	return 0;
}
