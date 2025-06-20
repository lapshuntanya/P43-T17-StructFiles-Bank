#pragma once // delete
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

	void showLine() {
		cout << "==================================================\n";
		cout << "|" << setw(20) << name << "|" << setw(15) << number << "|"
			<< setw(11) << cash << "|" << endl;
	}
	void showTitle() {
		cout << "==================================================\n";
		cout << "|" << setw(20) << "CLIENT" << "|" << setw(15) << "CARD" << "|"
			<< setw(11) << "CASH (UAH)" << "|" << endl;
		cout << "==================================================\n";
	}

	void saveToTextFile(FILE* file) {
		fprintf(file, "\n%s\n%lu %lf", name, number, cash);
	}
	/*
	Lesya Ukrainka
	1234561 100.000000*/
	void loadFromTextFile(FILE* fp) {
		fscanf_s(fp, "\n");
		fgets(name, 100, fp); //Lesya Ukrainka\n
		name[strlen(name) - 1] = '\0'; //Lesya Ukrainka\0
		fscanf_s(fp, "%lu %lf", &number, &cash);
	}

};