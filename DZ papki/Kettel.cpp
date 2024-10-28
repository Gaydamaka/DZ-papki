#include "Kettle.h"
#include <iostream>
using namespace std;



void Kettle:: SetDay(unsigned int d) {
		if (d >= 1 && d <= 31) Manufacturingday = d;
		else throw "Âû ïåðåäàëè íå ïðàâèëüíîå ÷èñëî â ïàðàìåðòðå. Âû äîëæíû ââåñòè ÷èñëî â äèàïàçîíå îò 1 äî 31 âêëþ÷èòåëüíî.\n";
	}
	unsigned int Kettle::GetDay() const {
		return Manufacturingday;
	}
	void Kettle::SetMonth(unsigned int a) {
		if (a >= 1 && a <= 12) ManufacturingMonth = a;
		else throw "Âû ïåðåäàëè íå ïðàâèëüíîå ÷èñëî â ïàðàìåðòðå. Âû äîëæíû ââåñòè ÷èñëî â äèàïàçîíå îò 1 äî 12 âêëþ÷èòåëüíî.\n";
	}
	unsigned int Kettle::GetMoth() const {
		return ManufacturingMonth;
	}
	void Kettle::SetYear(int y) {
		ManufacturingYear = y;
	}
	int Kettle::GetYear() const {
		return ManufacturingYear;
	}
	void Kettle::SetWeight(int r) {
		if (r >= 1 && r <= 1000) weight = r;
		else throw "Âû ïåðåäàëè íå ïðàâèëüíîå ÷èñëî â ïàðàìåòð. Âû äîëæíû ââåñòè ÷èñëî â äèàïàçîíå îò 1 äî 1000 ãðàì âêëþ÷èòåëüíî.\n";
	}
	unsigned int Kettle::Getweight() const {
		return weight;
	}
	void Kettle::SetWidth(int s) {
		if (s >= 1 && s <= 25)Width = s;
		else throw "Âû ïåðåäàëè íå ïðàâèëüíîå ÷èñëî â ïàðàìåòð. Âû äîëæíû ââåñòè ÷èñëî â äèàïàçîíå îò 1 äî 25 cv âêëþ÷èòåëüíî.\n";

	}
	unsigned int Kettle::GetWidth() const {
		return Width;
	}
	void Kettle::SetKettle(unsigned int d, unsigned int a, int y, int r, int s) {
		SetDay(d);
		SetMonth(a);
		SetYear(y);
		SetWeight(r);
		SetWidth(s);
	}
	void Kettle::Print() const {
		cout << "Дата изготовления: " << Manufacturingday << "/" << ManufacturingMonth << "/" << ManufacturingYear << "\n" << "Масса чайника: " << weight << "грамм" << "\n";
		cout << "Ширина чайника: " << Width << "см" << "\n";
	}


