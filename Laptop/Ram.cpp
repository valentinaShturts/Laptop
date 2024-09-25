#include "Ram.h"
RAM::RAM(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
RAM::RAM(const RAM& other)
{
	this->name = new char(strlen(other.name) + 1);
	strcpy_s(this->name, strlen(other.name) + 1, other.name);
}
void RAM::PrintRAM() const
{
	cout << "RAM name: " << name << endl;
}
RAM::~RAM()
{
	if (name != nullptr)delete[] name;
}
void RAM::SetName(const char* n)
{
	if (this->name != nullptr) delete[] this->name;
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}
char* RAM::GetName() const
{
	return name;
}