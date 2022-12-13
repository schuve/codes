#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int hadej;
    int tajny;

    srand (time(NULL));
    tajny = rand() % 10 + 1;

    do {
    cout << "hadej cislo od 1 do 10 \n";
    cin >> hadej;
    if (hadej<tajny) {
    cout << "hodnota je vetsi\n";
    }
    else if (hadej>tajny) {
    cout <<"hodnota je mensi \n";
    }
    } while (tajny!=hadej) ;
    cout<< "bum bum trefa";
    }



