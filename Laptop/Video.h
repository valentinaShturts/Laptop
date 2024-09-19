#pragma once
#include <cstring>
#include <iostream>
using namespace std;

class VideoCard
{
	char* name;
public:
	VideoCard(const char* n);
	void PrintVideoCard() const;
	~VideoCard();
	void SetName(const char* n);
	char* GetName() const;
};
