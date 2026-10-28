#include <iostream>

using namespace std;

int main() {

	int choose;         // wybor figur

	cout << "1. Kwadrat\n";
	cout << "2. Prostokat\n";
	cout << "3. trojkat\n";
	cout << "Wybierz rodzaj figury: ";
	cin >> choose;


	switch (choose)
	{

	case 1: {          //Obliczanie pola kwadratu.

		double bok;
		cout << "Podaj dlugosc boku: ";
		cin >> bok;

		double pole = bok * bok; // pole na kwadrat = bok * bok
		cout << "Pole powierzchni kwadratu wynosi: " << pole << endl;
		break;
	}

	case 2: {          //Obliczanie pola prostokąta.

		double dlugosc;
		cout << "Podaj dlugosc boku: ";
		cin >> dlugosc;

		double szerokosc;
		cout << "Podaj szerokosc boku: ";
		cin >> szerokosc;

		double pole = dlugosc * szerokosc; // pole na prostokat = długość * szerokośc
		cout << "Pole powierzchni prostokata wynosi: " << pole << endl;
		break;
	}

	case 3: {          //Obliczanie pola trójkąta.

		double podstawa;
		cout << "Podaj dlugosc podstawy trojkota: ";
		cin >> podstawa;

		double wysokosc;
		cout << "Podaj wysokosc trojkota: ";
		cin >> wysokosc;
		
		double pole = podstawa * wysokosc / 2; // pole na trojkat = podstawa * wysokość / 2
		cout << "Pole powierzchni trojkota wynosi : " << pole << endl;
		break;
	}
	default: {            // jeżeli zostanie wybrany niewłasciwy numer.

		cout << "zly wybor" << endl;

	}                             

	}       // tutaj sie konczy funkcja switch.

	return 0;
}