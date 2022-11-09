/*Napišite program koji s tipkovnice učitava 1 broj i ispisuje koliko on ima znamenki.*/

#include <iostream>
using namespace std;

int main() {

	int broj;
	
	cout << "Unesite broj > ";
	cin >> broj;
	
	int counter = 0;
	
	do {
	    broj = broj / 10;
	    counter++;
	    
	} while (broj != 0);
	
	cout << "Broj " << broj << " ima " << counter << " znamenki.";
  
	return 0;
}
