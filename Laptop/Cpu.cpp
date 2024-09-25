#include "Cpu.h"
CPU::CPU(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
CPU::CPU(const CPU& other)
{
	this->name = new char(strlen(other.name) + 1);
	strcpy_s(this->name, strlen(other.name) + 1, other.name);
}
void CPU::PrintCPU() const
{
	cout << "CPU name: " << name << endl;
}
CPU::~CPU()
{
	if (name != nullptr)delete[] name;
}
void CPU::SetName(const char* n)
{
	if (this->name != nullptr) delete[] this->name;
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}
char* CPU::GetName() const
{
	return name;
}