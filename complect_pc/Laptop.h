#pragma once
#include <string>
#include<iostream>
#include "hdd.h"
#include "ram.h"
#include "videocard.h"
#include "cpu.h"
#include "Keyboard.h"
#include "Printer.h"

using namespace std;

class Laptop {
	string name;
	HDD hdd;
	RAM ram;
	videocard card;
	CPU cp;
	KeyBoard* kbrd;
	Printer* print;

public:
	Laptop(const char* newname, int h, int r, videocard c, CPU p, KeyBoard* kb, Printer* prnt) : hdd(h), ram(r), card(c), cp(p), kbrd(kb), print(prnt) {
		name = newname;
	}

	void Print() {
		card.Input();
		cout << "\n";
		cp.Input();

		system("pause");
		cout << "\n\n";

		cout << "Laptop name: " << name << endl;
		hdd.Print();
		ram.Print();
		cout << "\n\t Card:\n";
		card.Print();
		cout << "\n\t CPU:\n";
		cp.Print();
		cout << "\n Devices:\n";
		kbrd->Print();
		cout << "\n";
		print->Print();
	}
};
