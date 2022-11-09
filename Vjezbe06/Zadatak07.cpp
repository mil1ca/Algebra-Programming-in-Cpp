/*Učitajte pozitivni broj od korisnika. Ukoliko je uneseni broj negativan
ispišite grešku "Morate unijeti broj veći ili jednak 10." i tražite ponovni
unos.
Stvorite polje prostih brojeva od 10 do n i ispišite elemente tog polja
odvojene zarezom.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int broj;
    
    do {
        cout << "Unesite broj > ";
        cin >> broj;
        
        if (broj < 10) {
            cout << "Morate unijeti broj veci ili jednak 10." << endl;
        }
        
    } while (broj < 10);
    
    vector<int> poljeProstihBrojeva;
    bool prostBroj;
    
    for (int i = 10; i < broj; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prostBroj = false;
                break;
            } else {
                prostBroj = true;
            }
        }
        if (prostBroj) {
            poljeProstihBrojeva.push_back(i);
        }
    }
    
    for (int i = 0; i < poljeProstihBrojeva.size(); i++) {
        cout << poljeProstihBrojeva[i];
        if (i == poljeProstihBrojeva.size() - 1) {
            cout << ".";
        } else {
            cout << ", ";
        }
    }
  
    return 0;
    
}
