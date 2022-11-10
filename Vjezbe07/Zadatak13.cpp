// Napišite funkciju koja vraća sumu parnih brojeva između 100 i 200.

#define MIN 100
#define MAX 200

#include <iostream>
using namespace std;

int suma_parnih(int x, int y) 
{
    int suma = 0;
    
    for (int i = x; i <= y; i++) 
    {
        if (i % 2 == 0) 
        {
            suma += i;
        }
    }
    
    return suma;
} 

int main(void) 
{
    
    cout << "Suma parnih brojeva izmedju " << MIN << " i " << MAX << " je " << suma_parnih(MIN, MAX) << "." << endl;
    
    return 0;
}
