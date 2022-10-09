#pragma once
#include <iostream>
using namespace std;

class Mouse
{
	string name;
	string button_r;
	string button_l;
public:
	Mouse() {
		name = nullptr;
		button_l = nullptr;
		button_r = nullptr;
	}
	Mouse(const char* name_mouse, const char* l, const char* r) {
		name = name_mouse;
		button_l = l;
		button_r = r;
	}
	void Print() {
		cout << "Name of keyboard: " << name << endl;
		cout << "Keyboard layout: " << button_r << ":" << button_l << endl;
	}
};

