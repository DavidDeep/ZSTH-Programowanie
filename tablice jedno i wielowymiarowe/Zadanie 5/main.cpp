#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
   int tablica[10][10];
   int max = 0, min = 100;
    srand( (unsigned)time( NULL ) );
    for (int i = 0; i <= 9; i++){
        for (int j = 0; j <= 9; j++){
            tablica[i][j] = rand() % 101;
            if (tablica[i][j] > max) max = tablica[i][j];
            if (tablica[i][j] < min) min = tablica[i][j];
        }
    }
    
    cout << "Liczba maksymalna: "<< max << "\nLiczba minimalna:"<< min;
    
    getch();
}
