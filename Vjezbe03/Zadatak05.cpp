/*Napišite program koji ispisuje tablicu množenja od 1 do 10.*/

#include <iostream>
using namespace std;

int main() {

	cout << "Tablica mnozenja od 1 do 10." << endl;
	
	for (int i = 1; i <= 10; i++) {
	    for (int j = 1; j <= 10; j++) {
	        cout << i * j << endl;
	    }
	    cout << endl;
	}
	
	return 0;
}
