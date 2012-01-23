#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    float a,b,x;
    cout << "Podaj a,b: \n";
    cin >> a >> b;
    if (a < 0 ){
        if (b < 0){
            x = a/b;
        } else{
            x = a-b;
            }
    }else if (b != 0){
            x = a / b - 5;
        } else {
            x = 0;
        }
        
    cout << "\nWynik: "<< x;
    getch();
}
