#pragma once
#include <cstring>
#include <iostream>
using namespace std;

class CPU
{
	char* name;
public:
	CPU(const char* n);
	void PrintCPU() const;
	~CPU();
	void SetName(const char* n);
	char* GetName() const;
};

