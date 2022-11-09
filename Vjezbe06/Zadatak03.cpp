/*Napišite program koji od korisnika traži da unese broj veći od 100 (ako je broj manji od 100 ponavlja se upit). 
Nakon unosa iz raspona (1 broj) upišite sve parne brojeve u polje.
Ispišite elemente polja odvojene zarezom. Nakon zadnjeg elementa stavite točku.*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    
    int broj;
    
    do {
        cout << "Unesite broj veci od 100 > ";
        cin >> broj;
    } while (broj < 100);
    
    vector<int> parniBrojevi;
    
    for (int i = 1; i <= broj; i++) {
        if (i % 2 == 0) {
            parniBrojevi.push_back(i);
        }
    }
    
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
