/*Napišite program koji s tipkovnice učitava dva cijela broja i operaciju.
Ispravne operacije su +, --, * , /. Ispišite rezultat.*/

#include <iostream>
using namespace std;

int main() {

	int brojA, brojB;
	char racunskaOperacija;
	bool ispravnoUnesenaRacunskaOperacija = true;
	int rezultat;
	
	cout << "Unesite prvi broj > ";
	cin >> brojA;
	cout << "Unesite drugi broj > ";
	cin >> brojB;
	
	cout << "Unesite znak operacije (+, -, *, /) > ";
	cin >> racunskaOperacija;
	
	switch (racunskaOperacija) {
	    case '+':
	       rezultat = brojA + brojB;
	       break;
	    case '-':
	       rezultat = brojA - brojB;
	       break;
	    case '*':
	       rezultat = brojA * brojB;
	       break;
	    case '/':
	       rezultat = brojA / brojB;
	       break;
	    default:
	       ispravnoUnesenaRacunskaOperacija = false;
	       cout << "Neispravno unesena racunska operacija." << endl;
	       break;
	}
	
	if (ispravnoUnesenaRacunskaOperacija) {
	    cout << brojA << " " << racunskaOperacija << " " << brojB << " = " << rezultat << endl;
	}
	
	return 0;
}
