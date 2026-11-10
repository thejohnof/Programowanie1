using namespace std;
#include <iostream>

int main() {

	int numbers[10];

	int negative = 0; //ujemne
	int positive = 0; //dodatnie

	int serchable; //szukana
	int serchable_appearance = 0; //wystąpienia szukanej

	cout << "Podaj 10 liczb: " << endl;

	for (int i = 0; i < 10; i++) {
		cin >> numbers[i];

		if (numbers[i] > 0) {
			positive++;
		}

		if (numbers[i] < 0) {
			negative++;
			}

	}

	cout << "Podaj szukana liczbe: ";
	cin >> serchable;

	for (int i = 0; i < 10; i++) {

		if (numbers[i] == serchable) {
			serchable_appearance++;

		}
	}

		cout << "Liczb ujemnych: " << negative << endl;
		cout << "Liczb dodatnich: " << positive << endl;
		cout << "liczba " << serchable << " wystapila " << serchable_appearance << " razy." << endl;

	return 0;
}