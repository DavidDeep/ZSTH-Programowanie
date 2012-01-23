#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n,m,x,r;
    cout << "..::SPOSOB PIERWSZY::..";
    cout <<"\nPodaj n i m: ";
    cin >> n >> m;
    
        if ( n < m ){
            x = m;
            m = n;
            n = x;
        } 
            r = n % m;
            while ( r != 0){
                n = m;
                m = r;
                r = n % m;
            }
           
        
        cout << "m: " << m;
        getch();
}
