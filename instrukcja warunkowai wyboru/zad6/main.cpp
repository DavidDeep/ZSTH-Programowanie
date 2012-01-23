#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Podaj liczbe: ";
    int liczba;
    cin >> liczba;
    if ( liczba > 0 ){
        cout << "\nPodana liczba jest wieksza od 0";
    } else if ( liczba < 0 ){
        cout << "\nLiczba jest mniejsza od 0.";
    } else if ( liczba == 0 ){
        cout << "liczba jest rowna 0.";
    }
    getch();
}
