#include <iostream>
#include "ArrayTemplate.h"
#include "Card.h"
#define CREATE_LOAD 0 // 1- Create, 0- Load

int main()
{
    srand(time(0));
    FILE* file = nullptr;

    Card Dmytro; //name="undefined", number=0, cash=0

#if CREATE_LOAD == 1
    Dmytro.createCard();
#else
    fopen_s(&file, "bank.txt", "r");
    if (file != nullptr) {
        Dmytro.loadFromTextFile(file);
        fclose(file);
        cout << "Loaded!\n";
    }
#endif
//=============================================================
    cout << "\n\n";
    Dmytro.cash += 50;

    Dmytro.showTitle();
    Dmytro.showLine();

 //=============================================================
    //Save
    fopen_s(&file, "bank.txt", "w");
    if (file != nullptr) {
        Dmytro.saveToTextFile(file);
        fclose(file);
        cout << "Saved!\n";
    }
}
 