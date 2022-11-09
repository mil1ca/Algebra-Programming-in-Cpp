/*Napišite program koji učitava udaljenost u kilometrima te ispisuje udaljenost u miljama (1 milja je 1.6km)*/

#include <iostream>
using namespace std;

int main(void) {
    
    float kilometri;
    
    cout << "Upisite udaljenost u kilometrima > ";
    cin >> kilometri;
    
    cout << kilometri << " kilometara = " << kilometri / 1.6 << " milja" << endl;
    
    return 0;
}
