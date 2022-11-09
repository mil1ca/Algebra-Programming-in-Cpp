/*Napišite program koji od korisnika učitava 10 brojeva u polje. Stvorite novo polje samo od parnih brojeva iz prvog polja. 
Ispišite elemente polja odvojene zarezom.*/

#define SIZE 10

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    
    int polje[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        cout << "Upisite " << i + 1 << ". broj > ";
        cin >> polje[i];
    }
    
    vector<int> parniBrojevi;
    
    for (int i = 0; i < SIZE; i++) {
        if (polje[i] % 2 == 0) {
            parniBrojevi.push_back(polje[i]);
        }
    }
    
    cout << "Ispis parnih brojeva:" << endl;
    for (int i = 0; i < parniBrojevi.size(); i++) {
        cout << parniBrojevi[i];
        if (i == parniBrojevi.size() - 1) {
            cout << ".";
        } else {
            cout << ", ";
        }
    }
    
    cout << endl;
    
    return 0;
    
}
