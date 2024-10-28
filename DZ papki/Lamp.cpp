#include "Lamp.h"
#include <iostream>
using namespace std;


void Lamp:: SetDay(unsigned int d) {
		if (d >= 1 && d <= 31) Day = d;
		else throw "Âû ïåðåäàëè íåâåðíîå çíà÷åíèå â ïàðàìåòðå. Äîëæíî áûòü ÷èñëî îò 1 äî 31 âêëþ÷èòåëüíî.\n";
	}
	unsigned int Lamp::GetDay() const {
		return Day;
	}

	void Lamp::SetMonth(unsigned int m) {
		if (m >= 1 && m <= 12) Month = m;
		else throw "Âû ïåðåäàëè íåâåðíîå çíà÷åíèå â ïàðàìåòðå. Äîëæíî áûòü ÷èñëî îò 1 äî 12 âêëþ÷èòåëüíî.\n";
	}
	unsigned int Lamp::GetMonth() const {
		return Month;
	}

	void Lamp::SetYear(int y) {
		Year = y;
	}
	int Lamp::GetYear() const {
		return Year;
	}

	void Lamp::SetPower(double p) {
		if (p >= 1 && p <= 200) power = p;
		else throw "Âû ïåðåäàëè íåâåðíîå çíà÷åíèå â ïàðàìåòðå. Ìîùíîñòü äîëæíà áûòü îò 1 äî 200 âàòò.\n";
	}
	double Lamp::GetPower() const {
		return power;
	}

	void Lamp::SetVoltage(double v) {
		if (v >= 110 && v <= 240) voltage = v;
		else throw "Âû ïåðåäàëè íåâåðíîå çíà÷åíèå â ïàðàìåòðå. Íàïðÿæåíèå äîëæíî áûòü îò 110 äî 240 âîëüò.\n";
	}
	double Lamp::GetVoltage() const {
		return voltage;
	}

	void Lamp::SetWidth(double w) {
		if (w >= 1 && w <= 15) width = w;
		else throw "Âû ïåðåäàëè íåâåðíîå çíà÷åíèå â ïàðàìåòðå. Øèðèíà äîëæíà áûòü îò 1 äî 15 ñì.\n";
	}
	double Lamp::GetWidth() const {
		return width;
	}

	void Lamp::SetLamp(unsigned int d, unsigned int m, int y, double p, double v, double w) {
		SetDay(d);
		SetMonth(m);
		SetYear(y);
		SetPower(p);
		SetVoltage(v);
		SetWidth(w);
	}
	void Lamp::Print() const {
		cout << "Дата изготовления: " << Day << "/" << Month << "/" << Year << "\n";
		cout << "Мощность лампы:: " << power << " Âò\n";
		cout << "Напряжение лампы: " << voltage << " Â\n";
		cout << "Ширина лампы: " << width << " ñì\n";
	}
