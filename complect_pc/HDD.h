#pragma once
#include "Laptop.h"
#include <iostream>
using namespace std;

class HDD
{
	int gb;

public:
	HDD() {
		gb = 0;
	}
	HDD(int coll_gb) {
		gb = coll_gb;
	}
	void Input() {
		cout << "Enter coll gb" << endl;
		cin >> gb;
	}
	void Print() {
		cout << "Coll gb = " << gb << endl;
	}
};

