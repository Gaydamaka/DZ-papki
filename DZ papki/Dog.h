#include <iostream>
using namespace std;

class Dog {
public:

	unsigned int BirthDay = 1;
	unsigned int BirthMonth = 1;
	int BirthYear = 2024;
	double weight;
	double height;

	void SetDay(unsigned int d);
	unsigned int GetDay() const;
	
	void SetMonth(unsigned int m);
	unsigned int GetMonth() const;

	void SetYear(int y);
	int GetYear() const;
	void SetWeight(double w);
	double GetWeight() const;

	void SetHeight(double h);
	double GetHeight() const;
	
	void SetDog(unsigned int d, unsigned int m, int y, double w, double h);
	void Print() const;
};

