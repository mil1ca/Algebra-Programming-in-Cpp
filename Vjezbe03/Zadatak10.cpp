/*Napišite program koji s tipkovnice učitava dva cijela broja A i B, te ispisuje pravokutnik sastavljen od znaka * koji je širine A i visine B.*/

#include <iostream>
using namespace std;

int main() {

	int visina, sirina;
	
	cout << "Unesite visinu pravokutnika > ";
	cin >> visina;
	cout << "Unesite sirinu pravokutnika > ";
	cin >> sirina;
	
	for (int i = 0; i < visina; i++) {
	    for (int j = 0; j < sirina; j++) {
	        cout << " * ";
	    }
	    cout << endl;
	}
  
	return 0;
}
