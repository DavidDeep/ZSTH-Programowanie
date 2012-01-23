#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int xpocz,xkonc,a,b,c,wynik;
    
    cout << "Podaj a: ";
    cin >> a;
    cout << "\nPodaj b: ";
    cin >> b;
    cout << "\nPodaj c: ";
    cin >> c;
    cout << "\nPodaj wartosc poczatkowa: ";
    cin >> xpocz;
    cout << "\nPodaj wartosc koncowa: ";
    cin >> xkonc;
    while (xpocz <= xkonc){
        wynik = a*pow(xpocz,2)+b*xpocz+c;
        cout << "\n" << xpocz << ". " << a << " * " << xpocz << " ^2 " << " + " << b << " = " << wynik;
        xpocz++;
    }
    getch();
    
    
}
