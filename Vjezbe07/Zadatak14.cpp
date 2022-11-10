// Napišite funkciju koja vraća n faktorijela

#include <iostream>
using namespace std;


// Funkcija koja vraća n faktorijela
int faktorijel(int number) 
{
    if (number <= 1) 
    {
        return 1;
    } 
    else 
    {
        return (number * faktorijel(number - 1));
    }
} 


int main(void) 
{
    int broj;
    
    cout << "Unesite broj za izracun faktorijela > ";
    cin >> broj;
    
    cout << broj << "! = " << faktorijel(broj) << endl;
    
    return 0;
}
