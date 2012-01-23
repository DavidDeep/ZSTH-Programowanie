#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cout << "Podaj n: \n";
    cin >> n;
    int i = 2;
    
    while ( i < n ){
    if (n % i == 0){
        cout << "Liczba nie jest liczba pierwsza.";
        getch();
        return 0;
    } else {
        i += 1;
    }
}
    cout << "Liczba jest pierwsza.";
    getch();
}
