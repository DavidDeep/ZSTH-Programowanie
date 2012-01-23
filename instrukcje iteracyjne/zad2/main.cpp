#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    int b;
    int wynik;
    do
    {
        cout << "Podaj a: \n";
        cin >> a;
    } while (a < 2);
    cin.ignore();
    cout << "Podaj b: \n";
    cin >> b;
    cin.ignore();
    wynik = a;
    do
    {
        wynik *= a;
        cout << wynik << ", ";
    } while (wynik < b);
   getch();
}
