#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int ileLiczb,liczba,wynik;
    int i = 1;
    cout << "Podaj ilosc liczb: ";
    cin >> ileLiczb;
    
    do{
        cout << "Podaj liczbe: ";
        cin >> liczba;
        wynik += liczba;
        i++;
    }while (i <= ileLiczb);
    cout << wynik;
    getch();
}
