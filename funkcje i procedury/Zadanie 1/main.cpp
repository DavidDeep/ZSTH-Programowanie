#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;


string TurboCpp();

int main(int argc, char *argv[])
{
   TurboCpp();
   getch();
}

string TurboCpp(){
    for (int i = 0; i <= 10; i++)
        cout << "Turbo C++\n";
}
