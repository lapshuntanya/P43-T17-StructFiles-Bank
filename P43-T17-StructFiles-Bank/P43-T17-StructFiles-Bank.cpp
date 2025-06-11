#include <iostream>
#include "ArrayTemplate.h"
#include "Card.h"

int main()
{
    srand(time(0));

    Card Dmytro; //name="undefined", number=0, cash=0

    Dmytro.createCard();
    cout << "\n\n";

    Dmytro.showTitle();
    Dmytro.showLine();
}
 