/*Napišite program koji učitava visinu osobe u centimetrima i ime te osobe, te ispisuje poruku oblika "Osoba Pero je visoka 176 centrimetara." (za unešene podatke 176 i Pero)*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string ime;
	int visina;
	
	cout << "Unesite ime osobe > ";
	cin >> ime;
	cout << "Unesite visinu osobe > ";
	cin >> visina;
	
	cout << "Osoba " << ime << " je visoka " << visina << " centimetara." << endl;
	
	return 0;
}
