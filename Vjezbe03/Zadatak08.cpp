/*Napišite program koji s tipkovnice učitava dva cijela broja te ispisuje sve brojeve od većeg prema manjem.*/

#include <iostream>
using namespace std;

int main() {

	int veci, manji;
	
	cout << "Unesite prvi broj > ";
	cin >> veci;
	cout <<"Unesite drugi broj > ";
	cin >> manji;
	
	int temp;
	if (manji > veci) {
	    temp = manji;
	    manji = veci;
	    veci = temp;
	}
	
	while (veci >= manji) {
	    cout << veci << " ";
	    veci--;
	}
	
	return 0;
}
