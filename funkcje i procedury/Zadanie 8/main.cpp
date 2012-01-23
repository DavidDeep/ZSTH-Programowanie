#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int fib(int x);

int main(int argc, char *argv[])
{
    int a;
    cin >> a;
    cout << fib(a);
    getch();
}

int fib(int x){
    if (x <= 2) return 1;
    else return (x-2) + (x-1);
}
