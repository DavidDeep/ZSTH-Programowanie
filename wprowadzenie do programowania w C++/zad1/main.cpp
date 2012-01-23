#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Podaj a: \n";
    int a;
    cin >> a;
    cout << "\nPodaj b: \n";
    int b;
    cin >> b;
    float c;
    c = ((pow(a,2) + pow (b,2)) + (a + b)) / 5;
    cout << "Wynik to: "
         << c;
    getch();
}
