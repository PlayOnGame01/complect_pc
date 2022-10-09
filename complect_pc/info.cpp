#include <iostream>
#include <string>

#include "Laptop.h"
#include "hdd.h"
#include "ram.h"
#include "videocard.h"
#include "CPU.h"
#include "Keyboard.h"
#include "Printer.h"
using namespace std;

int main() {
	videocard card("RTX 690");
	CPU cp("Intel i9-k1201132");
	KeyBoard kb("HyperX", "English");
	Printer print("brother", "00-80-61-85-0b-9a");

	Laptop Lap("Asus not_pud", 638, 16, card, cp, &kb, &print);
	Lap.Print();



}