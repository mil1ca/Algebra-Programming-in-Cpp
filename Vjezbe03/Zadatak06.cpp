/*Napišite program koji s tipkovnice učitava dva cijela broja te ispisuje sve brojeve od većeg prema manjem. 
Ispis riješite for petljom. Program se izvršava sve dok se ne unese prvi broj manji od drugog (do while)*/

#include <iostream>
using namespace std;

int main() {

	int brojA, brojB;
	
	do {
	    cout << "Unesite broj A > ";
	    cin >> brojA;
	    cout << "Unesite broj B > ";
	    cin >> brojB;
	    
	    for (int i = brojB; i >= brojA; i--) {
	    cout << i << " ";
	        
	    }
	    cout << endl;
	} while (brojA > brojB);
	
	return 0;
}
