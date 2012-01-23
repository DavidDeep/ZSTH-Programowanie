#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;


void suma(int la, int lb){
    cout << la+lb;
}

int main(int argc, char *argv[])
{
    int a,b;
    cin >> a >> b;
    suma(a,b);
    getch();
}
