
class Phone {
public:
	unsigned int day = 1;
	unsigned int month = 1;
	int year = 2024;
	double weight;
	double width;
	double height;
	void Setday(unsigned int d);
	unsigned int Getday() const;


	void setmonth(unsigned int m);

	unsigned int getmonth() const;

	void setyear(int y);
	int getyear() const;

	void setweight(double w);
	double getweight() const;


	void setwidth(double w);
	double getwidth() const;

	void setheight(double h);
	double getheight() const;

	void setphone(unsigned int d, unsigned int m, int y, double w, double wd, double h);

	void print() const;
};