#include "Dog.h"

#include <iostream>
using namespace std;

	void Dog::SetDay(unsigned int d) {
		if (d >= 1 && d <= 31) BirthDay = d;
		else throw "Íåïðàâèëüíîå ÷èñëî â ïàðàìåòðå. Äîëæíî áûòü îò 1 äî 31 âêëþ÷èòåëüíî.\n";
	}
	unsigned int Dog::GetDay() const {
		return BirthDay;
	}
	void Dog::SetMonth(unsigned int m) {
		if (m >= 1 && m <= 12) BirthMonth = m;
		else throw "Íåïðàâèëüíîå ÷èñëî â ïàðàìåòðå. Äîëæíî áûòü îò 1 äî 12 âêëþ÷èòåëüíî.\n";
	}
	unsigned int Dog::GetMonth() const {
		return BirthMonth;
	}

	void Dog::SetYear(int y) {
		BirthYear = y;
	}
	int Dog::GetYear() const {
		return BirthYear;
	}
	void Dog::SetWeight(double w) {
		if (w >= 1 && w <= 100) weight = w;
		else throw "Íåïðàâèëüíîå çíà÷åíèå âåñà. Äîëæíî áûòü îò 1 äî 100 êã âêëþ÷èòåëüíî.\n";
	}
	double Dog::GetWeight() const {
		return weight;
	}

	void Dog::SetHeight(double h) {
		if (h >= 10 && h <= 100) height = h;
		else throw "Íåïðàâèëüíîå çíà÷åíèå âûñîòû. Äîëæíî áûòü îò 10 äî 100 ñì âêëþ÷èòåëüíî.\n";
	}
	double Dog::GetHeight() const {
		return height;
	}
	void Dog::SetDog(unsigned int d, unsigned int m, int y, double w, double h) {
		SetDay(d);
		SetMonth(m);
		SetYear(y);
		SetWeight(w);
		SetHeight(h);
	}
	void Dog::Print() const {
		cout << "Дата рождения: " << BirthDay << "/" << BirthMonth << "/" << BirthYear << "\n";
		cout << "Масса: " << weight << " êã\n";
		cout << "Висота: " << height << " ñì\n";
	}

