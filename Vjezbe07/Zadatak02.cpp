// Napišite funkciju koja ispisuje sve brojeve od 1 do zadanog broja.

#include <iostream>
using namespace std;


// Funkcija koja ispisuje brojeve od 1 do n
void print(int n) 
{
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
}

int main(void) 
{
    int broj;
    
    cout << "Upisite do kojeg broja zelite ispis > ";
    cin >> broj;
    
    print(broj);
    
    return 0;
}
