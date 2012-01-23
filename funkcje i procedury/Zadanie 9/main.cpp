#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;


void Rysuj(int liczba);
int main(int argc, char *argv[])
{
    int a;
    cin >> a;
    Rysuj(a);
    getch();
}

void Rysuj(int liczba){
    string gwiazdki = "*";
    for (int i= 0; i <= liczba - 1; i++){
        cout << gwiazdki << endl;
        gwiazdki += "*";
    }
}
