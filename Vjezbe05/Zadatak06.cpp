/*Napišite program koji u jedno polje učitava 3 cijela broja u rasponu od 1 do 3. 
Nakon toga program u drugo polje učitava 3 cijela broja.
Prvim poljem definiramo raspored ispisivanja elemenata drugog polja. 
Ispišite elemente drugog polja u onom redoslijedu kako ih definira prvo polje.
Npr. za polje1 == {1, 3, 2}, polje2 == {16, 42, 46} potrebno je ispisati: 16, 46, 42.*/

#include <iostream>
using namespace std;

int main() {

	int raspored[3];
	int brojevi[3];
	int pozicija;
	
	cout << "Unos brojeva:" << endl;
	
	for (int i = 0; i < 3; i++) {
	    cout << "Unesite " << i + 1 << ". broj > ";
	    cin >> brojevi[i];
	}
	cout << endl;
	
	cout << "Unos rasporeda ispisa:" << endl;
	
	for (int i = 0; i < 3; i++) {
	    cout << "Unesite " << i + 1 << ". broj koji ce se ispisati > ";
	    cin >> raspored[i];
	}
	
	cout << endl;
	
	cout << "Ispis" << endl;
	
	for (int i = 0; i < 3; i++) {
	    pozicija = raspored[i];
	    
	    cout << brojevi[pozicija - 1];
	    if (i == 2) {
	        cout << ".";
	    } else {
	        cout << ", ";
	    }
	}
	
	return 0;
}
