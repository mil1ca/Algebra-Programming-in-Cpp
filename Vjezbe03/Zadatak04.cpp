/*Napišite program koji ispisuje brojeve od 16 do 42, jedan ispod drugog.
Napravite ispis pomoću while i for petlje.*/

#include <iostream>
using namespace std;

int main() {

	int broj = 16;
	
	cout << "Ispis sa while petljom:" << endl;
	while (broj <= 42) {
	    cout << broj << endl;
	    broj++;
	}
	
	cout << endl << "Ispis sa for petljom:" << endl;
	
	for (int i = 16; i <= 42; i++) {
	    cout << i << endl;
	}
	
	return 0;
}
