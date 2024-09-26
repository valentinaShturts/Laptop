#include "laptop.h"

int Laptop::laptopCount = 0;

Laptop:: Laptop() :cpu(nullptr), ssd(nullptr), vid(nullptr), ram(nullptr)
{
	name = nullptr;
	color = nullptr;
	price = 0;
}
Laptop::Laptop(const char* n, const char* c, int p, const char* cpu_name, const char* ssd_name, const char* vid_name, const char* ram_name) :price(p), cpu(cpu_name), ssd(ssd_name), vid(vid_name), ram(ram_name)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
	laptopCount++;
}
Laptop::Laptop(const char* n, const char* c) : Laptop(n, c, 0, "Default CPU", "Default SSD", "Default VideoCard", "Default RAM") {}
Laptop::Laptop(const Laptop& other) : price(other.price), cpu(other.cpu), ssd(other.ssd), vid(other.vid), ram(other.ram)
{
	this->name = new char[strlen(other.name) + 1];
	strcpy_s(this->name, strlen(other.name) + 1, other.name);

	this->color = new char[strlen(other.color) + 1];
	strcpy_s(this->color, strlen(other.color) + 1, other.color);

	cout << "COPY" << endl;
	laptopCount++;
}
Laptop::~Laptop()
{
	delete[] name;
	delete[] color;
	laptopCount--;
	cout << "Destruct lap" << endl;
}
void Laptop::PrintLaptop() const
{
	cout << color << " " << name << endl;
	cout << "Price: " << price << endl;
	cpu.PrintCPU();
	ssd.PrintSSD();
	vid.PrintVideoCard();
	ram.PrintRAM();
	cout << "Number of laptops: " << laptopCount << endl << endl;
}
char* Laptop::GetName()const
{
	return name;
}
char* Laptop::GetColor()const
{
	return color;
}
int Laptop::GetPrice()const
{
	return price;
}
int Laptop::GetLaptopCount()
{
	return laptopCount;
}
void Laptop::SetName(const char* n)
{
	if (this->name != nullptr) delete[] this->name;
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

void Laptop::SetColor(const char* c)
{
	if (this->color != nullptr) delete[] this->color;
	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);
}

void Laptop::SetPrice(double p)
{
	this->price = p;
}

CPU Laptop::GetCPU() const
{
    return cpu; 
}

void Laptop::SetCPU(const char* cpu_name)
{
    cpu.SetName(cpu_name); 
}

SSD Laptop::GetSSD() const
{
    return ssd; 
}

void Laptop::SetSSD(const char* ssd_name)
{
    ssd.SetName(ssd_name); 
}

VideoCard Laptop::GetVideoCard() const
{
    return vid;
}

void Laptop::SetVideoCard(const char* vid_name)
{
    vid.SetName(vid_name);
}

RAM Laptop::GetRAM() const
{
    return ram; 
}

void Laptop::SetRAM(const char* ram_name)
{
    ram.SetName(ram_name); 
}