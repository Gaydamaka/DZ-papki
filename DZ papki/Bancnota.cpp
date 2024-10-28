#include "Bancnota.h"
#include <iostream>
using namespace std;

	void Bancnota::SetYear(int a1) {
		Year = a1;
	}
	int Bancnota::GetYear() const {
		return Year;
	};
	
	void Bancnota::SetValue(int a3) {
		if (a3 >= 1 && a3 <= 1000) Value = a3;
		else throw"Âû ââåëè íå âåðíûé äèàïàçîí. Äèàïàçîí äîëæåí áûòü îò 1 äî 1000 âêëþ÷èòåëüíî!";
	}
	int Bancnota::GetValue()const {
		return Value;
	};
	void Bancnota::SetWidth(double w) {
		if (w >= 5 && w <= 25) Width = w;
		else throw "Íåâåðíàÿ øèðèíà. Îíà äîëæíà áûòü îò 5 äî 25 ñì âêëþ÷èòåëüíî.\n";
	}
	double Bancnota::GetWidth() const {
		return Width;
	};
	void Bancnota::SetDay(unsigned int d) {
		if (d >= 1 && d <= 31) Day = d;
		else throw "Íåâåðíûé äåíü. Äîëæíî áûòü îò 1 äî 31 âêëþ÷èòåëüíî.\n";
	}
	unsigned int Bancnota::GetDay() const {
		return Day;
	};

	void Bancnota::SetMonth(unsigned int m) {
		if (m >= 1 && m <= 12) Month = m;
		else throw "Íåâåðíûé ìåñÿö. Äîëæíî áûòü îò 1 äî 12 âêëþ÷èòåëüíî.\n";
	}
	unsigned int Bancnota::GetMonth() const {
		return Month;
	};
	void Bancnota::SetBanknote(unsigned int a1, int a3, int d, int w, int m) {
		SetDay(d);
		SetMonth(m);
		SetYear(a1);
		SetValue(a3);
		SetWidth(w);
	}
	void Bancnota::Print() const {
		cout << "Дата изготовления: " << Day << "/" << Month << "/" << Year << "\n";
		cout << "Ценность: " << Value << "\n";
		cout << "Ширина банкноты: " << Width << " cm\n";
	}