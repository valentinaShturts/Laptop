#pragma once
#include <cstring>
#include <iostream>
using namespace std;

class RAM
{
	char* name;
public:
	RAM(const char* n);
	RAM(const RAM& other);
	void PrintRAM() const;
	~RAM();
	void SetName(const char* n);
	char* GetName() const;
};
