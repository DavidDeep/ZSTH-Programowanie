#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void Slowa(string ls1, string ls2){
    cout << ls1 + ls2;
}

int main(int argc, char *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    Slowa(s1,s2);
    getch();
}
