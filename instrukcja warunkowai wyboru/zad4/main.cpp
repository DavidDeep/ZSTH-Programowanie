#include <cstdlib>
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
        cout << "Wprowadz a,b,c: \n";
   int a,b,c;
        cin >> a >> b >> c;
   
   float delta = pow(b,2)-4*a*c;
        cout << "Delta wynosi: " << delta << "\n";
        
    float x1,x2;
    
    if (delta > 0){
        x1 = (-b-sqrt(delta)) / (2*a);
        x2 = (-b+sqrt(delta)) / (2*a);
        cout << "x1: " << x1 << "\n";
        cout << "x2: " << x2 << "\n";
    } else if (delta == 0){
        x1 = (-b-sqrt(delta)) / (2 * a);
        
        cout << " x0: " << x1 << "\n";
    } else cout << "Delta ujemna! \n";
   
   
   
   
   getch();
}

