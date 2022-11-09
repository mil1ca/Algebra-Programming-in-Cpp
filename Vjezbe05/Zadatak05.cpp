/*Napišite program koji s tipkovnice učitava 5 cijelih brojeva u polje, još jedan
cijeli broj, te ispisuje ostatke svakog broja iz polja pri dijeljenju s njim.*/

#define SIZE 5

#include <iostream>
using namespace std;

int main(void) {

	int polje[SIZE];
	int broj;
	
	for (int i = 0; i < SIZE; i++) {
	    cout << "Upisite " << i + 1 << ". broj > ";
	    cin >> polje[i];
	}
	
	cout << endl;
	cout << "Upisite djelitelja > ";
	cin >> broj;
	
	cout << "Ispis ostataka:" << endl;
	
	for (int i = 0; i < SIZE; i++) {
	    cout << polje[i] << " % " << broj << " = " << polje[i] % broj << endl;
	}
	return 0;
}
