/*Napišite program koji može čuvati tri vrijednosti: 19.2, 4.875 i 11.25. Izračunajte prosječnu vrijednost i spremite je u memoriju. 
Na kraju ispišite prosječnu vrijednost.*/

#include <iostream>
using namespace std;

int main() {

	double prviBroj = 19.2;
	double drugiBroj = 4.875;
	double treciBroj = 11.25;
	
	double avg = (prviBroj + drugiBroj + treciBroj) / 3;
	
	cout << "Rezultat: " << avg << endl;
	
	return 0;
}

