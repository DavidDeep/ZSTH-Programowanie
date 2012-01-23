#include <iostream> 
#include <string> 
#include <conio.h>
using namespace std; 
  
int main() 
{ 
  string badany_tekst; 
  cout << "Wprowadz tekst: "; 
  getline(cin,badany_tekst); 
  
  string samogloski="aeiouAEIOU", spolgloski="bcdfghjklmnpqrstwxzBCDFGHJKLMNPRQSTWXZ"; 
  int n_samogloski=0, n_spolgloski=0,tonieznak=0; 
  
    for(int i=0; i<badany_tekst.length(); i++) { 
        for(int j=0; j<samogloski.length(); j++) { 
            if (badany_tekst[i]==samogloski[j]) n_samogloski++; } 
        for(int j=0; j<spolgloski.length(); j++) { 
            if (badany_tekst[i]==spolgloski[j]) n_spolgloski++;}
    } 
  
  cout << "Dlugos calego tekstu to: " << badany_tekst.length() << endl; 
  cout << "Samogloski (suma): " << n_samogloski << endl; 
  cout << "Spolgloski (suma): " << n_spolgloski << endl;  
  getch();
}  
