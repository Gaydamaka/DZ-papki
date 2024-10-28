#pragma once
#include <iostream>
using namespace std;

class Kettle {
public:
	unsigned int Manufacturingday = 1;
	unsigned int ManufacturingMonth = 1;
	int ManufacturingYear = 2024;
	double weight;
	double Width;

	void SetDay(unsigned int d);
	unsigned int GetDay() const;
	void SetMonth(unsigned int a);
	unsigned int GetMoth() const;
	void SetYear(int y);
	int GetYear() const;
	void SetWeight(int r);
	unsigned int Getweight() const;
	void SetWidth(int s);
	unsigned int GetWidth() const;
	void SetKettle(unsigned int d, unsigned int a, int y, int r, int s);
	void Print() const;
};


