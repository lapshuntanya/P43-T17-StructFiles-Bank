#pragma once
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

struct Card
{
	char name[100] = "undefined";
	unsigned long number = 0;
	double cash = 0;

	void createCard() {
		cout << "Input name of client: ";
		cin.getline(name, 100);
		number = rand() * 10'000 + rand();
		cash = 100;
	}

	void showCard() {
		cout << "=======================================\n";
		cout << "|\t CLIENT: " << name << "\n";
		cout << "=======================================\n";
		cout << "| " << number << ": " << cash << "UAH\n";
		cout << "=======================================\n";
	}
};