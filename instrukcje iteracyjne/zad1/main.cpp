#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int a, b, i;

    cout << "Podaj a: ";
    cin >> a;
    cin.ignore();
    cout << "\nPodaj b: ";
    cin >> b;
    cin.ignore();
    if (a<=b)
        for (i=a; i<=b; ++i)
        cout<<i<<", ";
    else
        for (i=b; i<=a; ++i)
        cout << i << ", ";
    cout << "\n\n";

    getch();
}
