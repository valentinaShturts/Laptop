#include "Video.h"
VideoCard::VideoCard(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
VideoCard::VideoCard(const VideoCard& other)
{
	this->name = new char(strlen(other.name) + 1);
	strcpy_s(this->name, strlen(other.name) + 1, other.name);
}
void VideoCard::PrintVideoCard() const
{
	cout << "Video Card name: " << name << endl;
}
VideoCard::~VideoCard()
{
	if (name != nullptr)delete[] name;
}
void VideoCard::SetName(const char* n)
{
	if (this->name != nullptr) delete[] this->name;
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}
char* VideoCard::GetName() const
{
	return name;
}