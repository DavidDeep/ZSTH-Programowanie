#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int tablica[10][10][10];
    
    for (int a = 0; a <= 9; a++){
        for (int b = 0; b <= 9; b++){
            for (int c = 0; c <= 9; c++){
                tablica[a][b][c] = 0;
            }
        }
    }
}
