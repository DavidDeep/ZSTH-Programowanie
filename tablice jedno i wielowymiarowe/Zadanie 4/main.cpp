#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;


long Silnia(int liczba);
int main(int argc, char *argv[])
{
    int z = 0;
    cout << "Podaj liczbe: ";
    cin >> z;
    if (z == 0 || z < 0) cout << "Podales zla liczbe"; 
    else cout << "Wynik silni: " << Silnia(z);
    getch();
}
long Silnia(int liczba){
    long int silnia = 1;
    for (int i = 2; i <= liczba; i++) silnia = silnia*i;
    return silnia;
}
