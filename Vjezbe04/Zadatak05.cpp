/*Potrebno je ispisati sve troznamenkaste brojeve čiji je zbroj znamenaka 5, a zadnja im je znamenka 0. (znamenka jedinice).*/

#include <iostream>
using namespace std;

int main(void) {
    
    cout << "Troznamenkasti brojevi ciji je zbroj znamenaka 5, a zadnja znamenka im je 0:" << endl;
    
    int l, s, d, zbroj;
    
    for (int i = 100; i < 1000; i++) {
        l = i / 100;
        s = (i / 10) % 10;
        d = i % 10;
        zbroj = l + s + d;
        if (zbroj == 5 && d == 0) {
            cout << i << endl;
        }
    }

    cout << endl;
    
	return 0;
}
