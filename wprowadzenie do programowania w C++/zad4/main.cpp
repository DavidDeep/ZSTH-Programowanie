#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;
    cout << "Podaj 3 boki trojkata: \n";
    cin >> a >> b >> c;
    bool trojkat = true;
    if (a+b <= c){
        trojkat = false;
    } else if (a+c <= b){
        trojkat = false;
    } else if (c+b <= a){
        trojkat = false;
    }
    if (trojkat){
        cout << "Mozna zbudowac trojkat!";
    } else{
        cout << "Nie mozna zbudowac trojkata";
    }
    
    getch();
}
