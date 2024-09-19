#pragma once
#include "Cpu.h"
#include "Ssd.h"
#include "Video.h"
#include "Ram.h"
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
	Laptop();
	static int laptopCount;
	Laptop(const char* n, const char* c, int p, const char* cpu_name, const char* ssd_name, const char* vid_name, const char* ram_name);
	Laptop(const char* n, const char* c);
	~Laptop();

	void PrintLaptop() const;
	char* GetName() const;
	char* GetColor() const;
	int GetPrice() const;
	int GetLaptopCount();

	void SetName(const char* n);
	void SetColor(const char* c);
	void SetPrice(double p);

	CPU GetCPU() const;
	void SetCPU(const char* cpu_name);
	SSD GetSSD() const;
	void SetSSD(const char* ssd_name);
	VideoCard GetVideoCard() const;
	void SetVideoCard(const char* vid_name);
	RAM GetRAM() const;
	void SetRAM(const char* ram_name);
};

