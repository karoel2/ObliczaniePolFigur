#include "stdafx.h"
#include "iostream"
#include "string"
#include "cmath"
#include "Header.h"
const float M_PI = 3.13159;
using namespace std;
int Trojkat::obwod() {
		return a + b + c;
}
Trojkat::Trojkat(int i, int o, int p) {
		i = a;
		p = b;
		o = c;
}
void Trojkat::kon_tro() {
	int q, w, e;
	bool y = false;
	do {
		cout << "podaj pierwszy bok trojkata\n";
		walidacja(q);
		cout << "podaj drugi bok trojkata\n";
		walidacja(w);
		cout << "podaj trzeci bok trojkata\n";
		walidacja(e);
		if (q + w > e && q + e > w && w + e > q) {
			Trojkat(q, w, e);
			y = true;
		}
		else {
			cout << "Nie da sie stowrzyc trojkata o podanych bokach! Sprobuj jeszcze raz\n";
		}
	} while (y != true);
}
void Trojkat::walidacja(int &a) {
	do {
		if (cin >> a) {
			break;
		}
		else {
			cout << "Podaj liczbe!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (1);
}
int Kwadrat::obwod() {
	return a * 4;
}
Kwadrat::Kwadrat(int q) {
	q = a;
}
void Kwadrat::kon_kwa() {
	cout << "podaj bok kwadratu" << endl;
	cin >> a;
}
int Prostokat::obwod() {
	return (a * 2) + (b * 2);
}
Prostokat::Prostokat(int q, int w) {
	q = a;
	w = b;
}
void Prostokat::kon_pros() {
	cout << "podaj boki prostokatu" << endl;
	cin >> a >> b;
}