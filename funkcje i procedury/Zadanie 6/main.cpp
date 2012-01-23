#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void PlusJeden(int la, int lb);
int main(int argc, char *argv[])
{
  static int a = 0, b = 10;
  PlusJeden(a,b);
  cout << "Zmienne globalne: " << a + 1<< ", " << b + 1 << endl;
  getch();
}

void PlusJeden(int la,int lb){
    cout << "Wartosci zmiennych lokalnych: " << la+1 << ", " << lb+1 <<endl;
}
