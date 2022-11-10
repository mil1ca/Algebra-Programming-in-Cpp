// Napišite funkciju koja kao parametar prima dva cijela broja, te ispisuje sve brojeve od manjeg do većeg.

#include <iostream>
using namespace std;


// Funkcija koja ispisuje brojeve od većeg ka manjem
void printBiggerToSmaller(int bigger, int smaller) 
{
    
    // Ako je prvi broj manji, zamijeni ih
    if (smaller > bigger) 
    {
        int temp = smaller;
        smaller = bigger;
        bigger = temp;
    }
    // Petlja za ispis
    for (int i = bigger; i >= smaller; i--) 
    {
        cout << i << " ";
    }    
}

int main(void) 
{
    int number_a, number_b;
    
    cout << "Unesite dva broja za ispis od veceg ka manjem > ";
    cin >> number_a;
    cin >> number_b;
    
    cout << "Ispis:" << endl;
    printBiggerToSmaller(number_a, number_b);
    
    return 0;
}
