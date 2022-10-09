#pragma once
#include <iostream>
using namespace std;

class KeyBoard {
	string name;
	string language;

public:
	KeyBoard() {
		name = nullptr;
		language = nullptr;
	}

	KeyBoard(const char* name_keyboard, const char* l) {
		name = name_keyboard;
		language = l;
	}

	void Print() {
		cout << "Name of keyboard: " << name << endl;
		cout << "Keyboard layout: " << language << endl;
	}

};