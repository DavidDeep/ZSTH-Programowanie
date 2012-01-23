#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 33; i <= 125; ++i)
    {
        cout << "Liczba: " << i << " ASCII: " << char(i) << "\n";
    } 
    getch();
}
