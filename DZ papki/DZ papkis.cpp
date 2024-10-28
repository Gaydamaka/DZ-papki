////1. Ëàìïà 
//
//#include <iostream>
//using namespace std;
//#include"Lamp.h"
//
//int main() {
//	setlocale(0, "");
//
//	Lamp myLamp;
//	myLamp.SetLamp(10, 7, 2021, 60, 220, 10);
//	myLamp.Print();
//
//	return 0;
//}

//2. Òåëåôîí
//
//#include <iostream>
//using namespace std;
//#include"Phone.h"
//
//int main() {
//	setlocale(0, "");
//
//	Phone phone;
//	phone.setphone(12, 6, 2021, 180, 7, 15.5);
//	phone.print();
//
//	return 0;
//}
////3.Ñîáàêà

//#include <iostream>
//using namespace std;
//#include"Dog.h"
//int main() {
//	setlocale(0, "");
//
//	Dog myDog;
//	myDog.SetDog(15, 8, 2018, 12.5, 45);
//	myDog.Print();
//
//	return 0;
//}
//
//#include"Bancnota.h"
//
//int main() {
//	setlocale(0, "");
//
//	Bancnota note{};
//	note.SetBanknote(2025, 7, 25, 15, 12);
//	note.Print();
//
//	return 0;
//}
//
#include"Kettle.h"
int main() {
	setlocale(0, "");

	Kettle qwerty;
	qwerty.SetKettle(29, 5, 2014, 1, 1);
	qwerty.SetWeight(438);
	qwerty.SetWidth(24);
	qwerty.Print();
}