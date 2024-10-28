#include <iostream>
using namespace std;
class Bancnota {
public:
	int Day;
	int Month;
	int Value;
	int Year ;
	int Width;

	void SetYear(int a1);
	int GetYear() const;

	void SetValue(int a3);
	int GetValue()const;
	void SetWidth(double w);
	double GetWidth() const;
	void SetDay(unsigned int d);
	unsigned int GetDay() const;
	void SetMonth(unsigned int m);
	unsigned int GetMonth() const;
	void SetBanknote(unsigned int a1, int a3, int d, int w, int m);
	void Print() const;
};