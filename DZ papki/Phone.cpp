
#include <iostream>
using namespace std;
#include "Phone.h"
#include <chrono>




void Phone::Setday(unsigned int d) {
		if (d >= 1 && d <= 31) day = d;
		else throw "íåâåðíûé äåíü. ââåäèòå çíà÷åíèå â äèàïàçîíå îò 1 äî 31 âêëþ÷èòåëüíî.\n";
	}
unsigned int Phone:: Getday() const {
		return day;
	}

	void Phone:: setmonth(unsigned int m) {
		if (m >= 1 && m <= 12) month = m;
		else throw "íåâåðíûé ìåñÿö. ââåäèòå çíà÷åíèå â äèàïàçîíå îò 1 äî 12 âêëþ÷èòåëüíî.\n";
	}
	unsigned int Phone::getmonth() const {
		return month;
	}

	void Phone::setyear(int y) {
		year = y;
	}
	int Phone::getyear() const {
		return year;
	}

	void Phone::setweight(double w) {
		if (w >= 50 && w <= 500) weight = w;
		else throw "íåâåðíûé âåñ. ââåäèòå çíà÷åíèå â äèàïàçîíå îò 50 äî 500 ãðàìì âêëþ÷èòåëüíî.\n";
	}
	double Phone::getweight() const {
		return weight;
	}

	void Phone::setwidth(double w) {
		if (w >= 5 && w <= 15) width = w;
		else throw "íåâåðíàÿ øèðèíà. ââåäèòå çíà÷åíèå â äèàïàçîíå îò 5 äî 15 ñì âêëþ÷èòåëüíî.\n";
	}
	double Phone::getwidth() const {
		return width;
	}

	void Phone::setheight(double h) {
		if (h >= 10 && h <= 20) height = h;
		else throw "íåâåðíàÿ âûñîòà. ââåäèòå çíà÷åíèå â äèàïàçîíå îò 10 äî 20 ñì âêëþ÷èòåëüíî.\n";
	}
	double Phone::getheight() const {
		return height;
	}

	void Phone::setphone(unsigned int d, unsigned int m, int y, double w, double wd, double h) {
		Setday(d);
		setmonth(m);
		setyear(y);
		setweight(w);
		setwidth(wd);
		setheight(h);
	}

	void Phone::print() const {
		cout << "Дата изготовления: " << day << "/" << month << "/" << year << "\n";
		cout << "масса телефона: " << weight << " ãðàìì\n";
		cout << "Ширина телефона: " << width << " ñì\n";
		cout << "Высота телефона: " << height << " ñì\n";
	}
