#include "Ssd.h"
SSD::SSD(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void SSD::PrintSSD() const
{
	cout << "SSD name: " << name << endl;
}
SSD::~SSD()
{
	if (name != nullptr)delete[] name;
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