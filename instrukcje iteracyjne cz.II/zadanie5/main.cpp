#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int liczba1,liczba2,wynik,podanyWynik;
         srand(static_cast<int>(time(NULL))); //zainicjowanie losowania
         
        for( int i = 1; i <= 10; i++ ){
            
        liczba1 = 1 + rand() % 10;
        liczba2 = 1 + rand() % 10;
        wynik = liczba1 * liczba2;
        cout << i << ". " << liczba1 << " * " << liczba2 << "= ";
        cin >> podanyWynik;
        while ( wynik != podanyWynik ){
            cout << i << ". "  << liczba1 << " * " << liczba2 << "= ";
        cin >> podanyWynik;
    }
    }
    cout << "Koniec";
    getch();
}
