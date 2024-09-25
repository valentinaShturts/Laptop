#include "laptop.h"
#include <iostream>
using namespace std;

int main()
{
	Laptop laptop("Aorus", "Black", 17000, "CPU Ua", "SSD Ua", "Vid 01", "RAM Ua");
	laptop.PrintLaptop();
	Laptop lap1("Aorus", "White");
	lap1.PrintLaptop();
	Laptop lap2(laptop);
	lap2.PrintLaptop();

	laptop.SetCPU("AMD Ryzen 9");
	laptop.SetSSD("Kingston 2TB");
	laptop.SetVideoCard("NVIDIA");
	laptop.SetRAM("32GB DDR4");
	laptop.PrintLaptop();


}