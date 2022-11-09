/*Program računa srednju ocjenu uspjeha učenika. Nakon posljednje ocjene treba unijeti 0. U slučaju da je bilo koja od ocjena 1,
ispisuje se poruka: Negativan uspjeh. Ako se unese vrijednost koja nije iz raspona od 1 5, ispisat će se poruka: Pogrešan unos.*/

#include <iostream>
using namespace std;

int main() {
    
    float ocjena, brojac = 0, suma = 0, srednjaOcjena;
    
    cout << "Za prekid unosa ocjena unesite 0." << endl;
    
    do {
        cout << "Unesite ocjenu > ";
        cin >> ocjena;
        
        if (ocjena == 1) {
            cout << "Negativan uspjeh." << endl;
            return 0;
        } else if (ocjena < 0 || ocjena > 5) {
            cout << "Pogresan unos." << endl;
            return 0;
        } else {
            suma += ocjena;
            if (ocjena != 0) {
                brojac++;
            }
        }
    } while (ocjena > 0);
    
    srednjaOcjena = suma / (1.0 * brojac);
    
    cout << "Srednja ocjena ucenika je " << srednjaOcjena << "." << endl;
    
    return 0;
}
