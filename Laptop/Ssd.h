#pragma once
#include <cstring>
#include <iostream>
using namespace std;

class SSD
{
	char* name;
public:
	SSD(const char* n);
	SSD(const SSD& other);
	void PrintSSD() const;
	~SSD();
	void SetName(const char* n);
	char* GetName() const;
};

