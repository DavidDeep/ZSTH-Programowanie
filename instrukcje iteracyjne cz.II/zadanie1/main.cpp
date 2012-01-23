#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{   
    int x = 0;
    int i = 0;
    int suma = 0;
    do{
    cout << "Podaj liczbe: ";
    cin >> x;
     if (x != 0){
            suma += x;
            i++;
        }
    }while (x != 0);
    
    cout << "\n\nSuma " << i << " liczb wynosi: " << suma;
    getch();
}
