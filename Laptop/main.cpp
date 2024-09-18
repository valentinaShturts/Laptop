#include <iostream>
using namespace std;

class CPU
{
	char* name;
public:
	CPU(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void PrintCPU()
	{
		cout << "CPU name: " << name << endl;
	}
	~CPU()
	{
		delete[] name;
	}
};

class SSD
{
	char* name;
public:
	SSD(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void PrintSSD()
	{
		cout << "SSD name: " << name << endl;
	}
	~SSD()
	{
		delete[] name;
	}
};

class VideoCard
{
	char* name;
public:
	VideoCard(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void PrintVideoCard()
	{
		cout << "VideoCard name: " << name << endl;
	}
	~VideoCard()
	{
		delete[] name;
	}
};

class RAM
{
	char* name;
public:
	RAM(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void PrintRAM()
	{
		cout << "RAM name: " << name << endl;
	}
	~RAM()
	{
		delete[] name;
	}
};

class Laptop
{
	char* name;
	char* color;
	int price;
	CPU cpu;
	SSD ssd;
	VideoCard vid;
	RAM ram;
public:
	Laptop()
	{
		name = nullptr;
		color = nullptr;
		price = 0;
	}
	Laptop(const char* n, const char* c,int p, const char* cpu_name, const char* ssd_name, const char* vid_name, const char* ram_name) :price(p), cpu(cpu_name), ssd(ssd_name), vid(vid_name), ram(ram_name)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);

		color = new char[strlen(n) + 1];
		strcpy_s(color, strlen(n) + 1, n);
	}
	~Laptop()
	{
		delete[] name;
		delete[] color;
	}
	void PrintLaptop()
	{
		cout << color <<name << endl;
		cout << "Price: " << price << endl;
		cpu.PrintCPU();
		ssd.PrintSSD();
		vid.PrintVideoCard();
		ram.PrintRAM();
	}
	char* GetName()
	{
		return name;
	}
	char* GetColor()
	{
		return color;
	}
	int GetPrice()
	{
		return price;
	}
};