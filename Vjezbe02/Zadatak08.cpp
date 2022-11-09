/*Napišite program koji učitava duljinu stranica pravokutnika te ispisuje njegovu površinu i opseg.*/

#include <iostream>
using namespace std;

int main(void) {
    
    cout << "Izracunavanje povrsine i opsega pravokutnika." << endl;
    
    int stranicaA, stranicaB;
    
    cout << "Upisite duljine stranice A > ";
    cin >> stranicaA;
    cout << "Upisite duljinu stranice B > ";
    cin >> stranicaB;
    
    int povrsina, opseg;
    
    povrsina = stranicaA * stranicaB;
    opseg = 2 * (stranicaA + stranicaB);
    
    cout << "Povrsina: " << povrsina << endl;
    cout << "Opseg: " << opseg << endl;
    
    return 0;
}
