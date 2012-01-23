#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;
    cout << "Podaj a, b: \n";
    cin >> a >> b;
    if (a < b){
        c = a;
    } else {
    c = b;
    }
    cout << "Wiêksza liczba to: " << c;
    
    getch();
}
