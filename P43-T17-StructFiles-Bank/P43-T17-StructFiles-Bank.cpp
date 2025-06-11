#include <iostream>
#include "ArrayTemplate.h"
#include "Card.h"
#define CREATE_LOAD 1 // 1- Create, 0- Load

int main()
{
    srand(time(0));
    FILE* file = nullptr;

 /*   Card Dmytro; //name="undefined", number=0, cash=0

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
    }*/

    int NClients = 0; // Розмір масиву
    Card* arr = nullptr; // Масив карток

  //================= Create or Load ====================
#if CREATE_LOAD == 1
    NClients = 3;
    arr = new Card[3]{
        {"Lesya Ukrainka", 1234567, 200},
        {"Bogdan Khmelnytskiy", 6543212, 5'000},
        {"Taras Shevchenko", 876543, 100}
    };
#else
    //load
#endif
  //====================== Menu =========================
  

  //====================== Save =========================
}
 