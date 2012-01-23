#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{ int a,b,c,x;

cout << "Podaj ile liczb chcesz dodac : \n";
cin >> a;
b = 0;
c = 0;
do {
    b=b+1;
    cin >> x;
    c = c + x; 
    } while (a >= b);
    cout << c << "\n";

system("pause");
return 0;
}
