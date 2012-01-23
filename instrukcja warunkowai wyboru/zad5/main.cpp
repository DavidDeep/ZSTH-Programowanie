#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Podaj litere: ";
    char litera;
    cin >> litera;
    
    switch( litera ){
        case 'a': cout << "\nPodales samogloske.";
        break;
        case 'e': cout << "\nPodales samogloske.";
        break;
        case 'i': cout << "\nPodales samogloske.";
        break;
        case 'o': cout << "\nPodales samogloske.";
        break;
        case 'u': cout << "\nPodales samogloske.";
        break;
        case 'y': cout << "\nPodales samogloske.";
        break;
        case 'b': cout << "\nPodales wspolgloske.";
        break;
        case 'c': cout << "\nPodales wspolgloske.";
        break;
        case 'd': cout << "\nPodales wspolgloske.";
        break;
        case 'f': cout << "\nPodales wspolgloske.";
        break;
        case 'g': cout << "\nPodales wspolgloske.";
        break;
        case 'h': cout << "\nPodales wspolgloske.";
        break;
        case 'k': cout << "\nPodales wspolgloske.";
        break;
        case 'l': cout << "\nPodales wspolgloske.";
        break;
        case 'm': cout << "\nPodales wspolgloske.";
        break;
        case 'n': cout << "\nPodales wspolgloske.";
        break;
        case 'p': cout << "\nPodales wspolgloske.";
        break;
        case 'r': cout << "\nPodales wspolgloske.";
        break;
        case 's': cout << "\nPodales wspolgloske.";
        break;
        case 't': cout << "\nPodales wspolgloske.";
        break;
        case 'w': cout << "\nPodales wspolgloske.";
        break;
        case 'x': cout << "\nPodales wspolgloske.";
        break;
        case 'z': cout << "\nPodales wspolgloske.";
        break;
        default: cout << "\nTo nie jest litera!";
    }
    getch();
}
