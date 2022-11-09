/*Napišite program koji ispisuje ASCII tablicu od 32 do 128.*/

#include <iostream>
using namespace std;

int main() {

	cout << "Ispis ASCII tablice od 32 do 128." << endl;
	
	for (int i = 32; i <= 128; i++) {
	    cout << char(i) << endl;
	}
	
	return 0;
}
