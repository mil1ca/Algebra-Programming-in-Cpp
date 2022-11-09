/*Napravite Loto 7/45 aplikaciju. U bubnju se nalazi 45 brojeva.
Korisnik treba odigrati 7 brojeva. Nakon odigranih brojeva prikazuju se izvučeni i odigrani brojevi, broj pogodaka te pogođeni brojevi. 
Svi brojevi se prikazuju sortirano. U aplikaciji treba osigurati da korisnik ne može više puta odigrati isti broj.*/

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(0));
    
    int bubanj[45];
    int odigrani[7];
    int izvuceni[7];
    
    cout << "LOTO 7/45!" << endl << endl;
    
    //Stavi u bubanj 45 brojeva
    for (int i = 0; i < 45; i++) {
        bubanj[i] = i + 1;
    }
    
    //Odigraj brojeve
    int odigraniBroj;
    for (int i = 0; i < 7; i++) {
        bool brojJeVecOdigran;
        do {
            cout << "Odigraj " << i + 1 << ". broj > ";
            cin >> odigraniBroj;
            for (int j = 0; j < 7; j++) {
                brojJeVecOdigran = false;
                if (odigrani[j] == odigraniBroj) {
                    brojJeVecOdigran = true;
                    break;
                }
            }
        } while (odigraniBroj < 1 || odigraniBroj > 45 || brojJeVecOdigran);
        odigrani[i] = odigraniBroj;
    }
    
    //Sortiranje odigranih brojeva
    for (int i = 0; i < 7; i++) {
        int temp;
        for (int j = i + 1; j < 7; j++) {
            if (odigrani[i] > odigrani[j]) {
                temp = odigrani[i];
                odigrani[i] = odigrani[j];
                odigrani[j] = temp;
            }
        }
    }
    //Izvuci brojeve
    for (int i = 0; i < 7; i++) {
        int izvuceniBroj;
        bool brojJeVecIzvucen;
        do {
            brojJeVecIzvucen = false;
            izvuceniBroj = rand() % 45 + 1;
            for (int j = 0; j < 7; j++) {
                if (izvuceni[j] == izvuceniBroj) {
                    brojJeVecIzvucen = true;
                    break;
                }
            }
        } while (brojJeVecIzvucen);
        izvuceni[i] = izvuceniBroj;
    }
    //Sortiraj izvucene brojeve
    for (int i = 0; i < 7; i++) {
        int temp;
        for (int j = i + 1; j < 7; j++) {
            if (izvuceni[i] > izvuceni[j]) {
                temp = izvuceni[i];
                izvuceni[i] = izvuceni[j];
                izvuceni[j] = temp;
            }
        }
    }
    //Ispisi odigrane brojeve
    cout << "Odigrani brojevi: " << endl;
    for (int i = 0; i < 7; i++) {
        cout << odigrani[i] << endl;
    }
    cout << endl;
    
    //Ispisi izvucene brojeve
    cout << "Izvuceni brojevi: " << endl;
    for (int i = 0; i < 7; i++) {
        cout << izvuceni[i] << endl;
    }
    cout << endl;
    
    //Dobitni brojevi
    cout << "Dobitni brojevi: " << endl;
    int brojPogodaka = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (odigrani[i] == izvuceni[j]) {
                brojPogodaka++;
                cout << izvuceni[j] << endl;
                
            }
        }
    }
    cout << "Broj pogodaka: " << brojPogodaka << "." << endl;
    
    return 0;
    
}
