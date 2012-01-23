#include <iostream.h>
#include <conio.h>

int main()
{
    int rozmiar = 32;
    char word[rozmiar];
    char tablica[rozmiar];
    int x = 0;
    cout << "Wprowadz tekst (maks. 32 znaki, zakonczony kropka!!!!!):\n";
    cin.getline( word, rozmiar );
    cout << "Zaszyfrowany tekst:\n";
    while (word[x] != '\0')    // jesli string nie jest na koncu
    {
            if(word[x] == char(32)){
                int(word[x]+3);
            }
        tablica[x] = int(word[x]+3);    // zamien char na int i pszypisz do tablicy

        cout << tablica[x];                    //wypisz tablice
        x++;
    }
    cout << "\n";
    getch();
}
