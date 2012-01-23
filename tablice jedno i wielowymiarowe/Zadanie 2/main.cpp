#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int tablica[10];
    srand( (unsigned)time( NULL ) );
    
    for (int i = 0; i <= 9; i++){
        tablica[i] = rand() % 10;
        cout << tablica[i] << ", ";
    }
    
    getch();
}
