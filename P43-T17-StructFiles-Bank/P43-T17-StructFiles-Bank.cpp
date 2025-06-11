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
    int menu = 0;
    Card temp_card;
    char text[100];
    unsigned long temp_number;
    double temp_cash = 0;
    int id = -1;

    do
    {
        cout << "--------------------------\n";
        cout << "|\t MENU:\n";
        cout << "--------------------------\n";
        cout << " 0 - exit and save\n";
        cout << " 1 - show list of clients\n";
        cout << " 2 - open a new card\n";
        cout << "--------------------------\n";
        cout << ">>> ";
        cin >> menu;

        switch (menu)
        {
        default:cout << "Error!\n";  break;
        case 0: cout << "Bye =)\n"; break;
        case 1: 
            temp_card.showTitle();
            for (int i = 0; i < NClients; i++)
            {
                arr[i].showLine();
            }
            break;
        case 2:
            cin.ignore(); // 2 enter => menu=2,  cin.ignore()=enter
            temp_card.createCard(); // !!!!!!
            addItemBack(arr, NClients, temp_card);
            cout << "Added!\n";
            break;
        }

    } while (menu != 0);

  //====================== Save =========================
}
 