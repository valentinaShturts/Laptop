#include "Ssd.h"
SSD::SSD(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
SSD::SSD(const SSD& other)
{
	this->name = new char[strlen(other.name) + 1];
	strcpy_s(this->name, strlen(other.name) + 1, other.name);
}
void SSD::PrintSSD() const
{
	cout << "SSD name: " << name << endl;
}
SSD::~SSD()
{
	delete[] name;
}
void SSD::SetName(const char* n)
{
	if (this->name != nullptr) delete[] this->name;
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}
char* SSD::GetName() const
{
	return name;
}