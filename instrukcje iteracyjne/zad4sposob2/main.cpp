#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n,m,x,r;
    cout << "..::SPOSOB DRUGI::..";
    cout << "\nPodaj n, m: ";
    cin >> n >> m;
    
    while ( n != m ){
    if ( n != m ){
        if ( n > m ){
            n = n - m;
        }
        if ( n < m ){
            m = m - n;
        }
    }
}
    cout << "m: " << m;
    getch();
}
