

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
int a;
cout << "Podaj numer miesiaca: \n" ;
cin >> a;
switch(a){
case 1:
cout << "Ten miesiac ma 31 dni";
break;
case 2:
cout << "Ten miesiac ma 28 lub 29 dni";
break;
}
system("pause");
return 0;
}

