#pragma once
#include "Laptop.h"
#include <iostream>
using namespace std;

class RAM
{
	int speed;

public:
	RAM() {
		speed = 0;
	}
	RAM(int coll_speed) {
		speed = coll_speed;
	}
	void Input() {
		cout << "Enter coll gb" << endl;
		cin >> speed;
	}
	void Print() {
		cout << "Coll gb = " << speed << endl;
	}
};


