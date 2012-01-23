#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int xpocz,xkonc,a,b,wynik;
    
    cout << "Podaj a: ";
    cin >> a;
    cout << "\nPodaj b: ";
    cin >> b;
    cout << "\nPodaj wartosc poczatkowa: ";
    cin >> xpocz;
    cout << "\nPodaj wartosc koncowa: ";
    cin >> xkonc;
    while (xpocz <= xkonc){
        wynik = a*xpocz+b;
        cout << "\n" << xpocz << ". " << a << " * " << xpocz << " + " << b << " = " << wynik;
        xpocz++;
    }
    getch();
    
    
}
