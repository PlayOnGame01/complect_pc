#pragma once
#include <iostream>
using namespace std;

class videocard {
	string name;
	string type;
	int op_memory;

public:
	videocard() {
		name = nullptr;
		type = nullptr;
		op_memory = 0;
	}

	videocard(const char* name_card) {
		name = name_card;
	}

	void Input() {
		cout << "Enter type card: ";
		cin >> type;
		cout << "Enter coll memroy card: ";
		cin >> op_memory;
	}

	void Print() {
		cout << "Name of card: " << name << endl;
		cout << "Type of card: " << type << endl;
		cout << "Memory of card: " << op_memory << "Speed of this card" << endl;
	}

};
