/*Napišite program koji će u polju od 20 elemenata pronaći najveći i najmanji element. Ispišite te
elemente. Polje popunite slučajnim brojevima.*/

#define SIZE 20

#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
    
    int polje[SIZE];
	
    srand(time(0));
	
    for (int i = 0; i < SIZE; i++) {
        polje[i] = rand() % 100;
    }
    
    for (int i = 0; i < SIZE; i++) {
        cout << polje[i] << endl;
    }
    
    int najmanji = polje[0], najveci = polje[0];
    for (int i = 0; i < SIZE; i++) {
        if (polje[i] < najmanji) {
            najmanji = polje[i];
        }
        if (polje[i] > najveci) {
            najveci = polje[i];
        }
    }
    
    cout << "Najmanji broj je " << najmanji << "." << endl;
    cout << "Najveci broj je " << najveci << "." << endl;
	
	return 0;
}
