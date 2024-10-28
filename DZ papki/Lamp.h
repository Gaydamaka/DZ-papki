#pragma once
class Lamp
{
	public:
		unsigned int Day = 1;
		unsigned int Month = 1;
		int Year = 2024;
		double power;
		double voltage;
		double width;
		void SetDay(unsigned int d);
		unsigned int GetDay() const;	

		void SetMonth(unsigned int m);
		unsigned int GetMonth() const;
		
		void SetYear(int y);
		int GetYear() const;

		void SetPower(double p);
		double GetPower() const;

		void SetVoltage(double v);
		double GetVoltage() const;

		void SetWidth(double w);
		double GetWidth() const;

		void SetLamp(unsigned int d, unsigned int m, int y, double p, double v, double w);
		void Print() const;
	};


