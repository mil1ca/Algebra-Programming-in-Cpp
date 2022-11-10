// Napišite funkciju koja ispisuje tablicu množenja od 1 do zadanog broja.

#include <iostream>
using namespace std;


// Funkcija koja ispisuje tablicu množenja od 1 do zadanog broja
void ispis(int number) {
    
    for (int i = 1; i <= number; i++) 
    {
        for (int j = 1; j <= number; j++) 
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
} 


int main(void) 
{
    int broj;
    
    cout << "Unesite broj za ispis tablice mnozenja > ";
    cin >> broj;
    
    ispis(broj);
    
    return 0;
}
