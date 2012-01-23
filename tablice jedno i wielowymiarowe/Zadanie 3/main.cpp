#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int liczby[10];
    int potegi[10];
    
     srand( (unsigned)time( NULL ) );               //taki tam randomize
     
     for (int i = 0; i <= 9; i++){
            liczby[i] = rand() % 10;
            cout << liczby[i] << ", ";
        }
        cout << endl;
     for (int i = 0; i <= 9; i++){
            potegi[z] = pow(liczby[z],liczby[z+1]);
            cout << potegi[i] << ", ";
            z++;
        }   
    getch();
}
