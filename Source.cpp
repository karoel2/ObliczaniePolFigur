#include "stdafx.h"
#include "iostream"
#include "string"
#include "cmath"
#include "Header.h"
const float M_PI = 3.141592;
using namespace std;
void walidacja(int &t) {
	do {
		if (cin >> t) {
			break;
		}
		else {
			cout << "Podaj liczbe!\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (1);
}
void wiekszaOdZera(int &t) {
	t = 0;
	do {
		walidacja(t);
		if (t <= 0) cout << "Liczba musi byc wieksza od 0\n";
	} while (t <= 0);
}
bool trapez(int a, int b, int c, int d) {
	if ((abs(d - c) < abs(b - a)) && (abs(b - a) < (d + c)) || ((d - c) == 0) && ((b - a) == 0)) {
		return true;
	}
	else {
		return false;
		cout << "Nie da sie stowrzyc podanego trapezu! Sprobuj jeszcze raz\n";
	}
}
float Trojkat::obwod() {
		return a + b + c;
}
float Prostokat::obwod() {
	return (a * 2) + (b * 2);
}
float Kwadrat::obwod() {
	return a * 4;
}
float Trapez::obwod() {
	return a + b + c + d;
}
float Deltoid::obwod() {
	return (a * 2) + (b * 2);
}
float Romb::obwod() {
	return a * 4;
}
float Okrag::obwod() {
	return 2*M_PI*a;
}
float Rownoleglobok::obwod() {
	return (a * 2) + (b * 2);
}
void Trojkat::kon_tro() {
	int q, w, e;
	bool y = false;
	do {
		cout << "Podaj boki trojkata\n";
		wiekszaOdZera(q);
		wiekszaOdZera(w);
		wiekszaOdZera(e);
		if (q + w > e && q + e > w && w + e > q) {
			a = q;
			b = w;
			c = e;
			y = true;
		}
		else {
			cout << "Nie da sie stowrzyc trojkata o podanych bokach! Sprobuj jeszcze raz\n";
		}
	} while (y != true);
}
void Trapez::kon_trap() {
	int q, w, e, r;
	bool qwe=false;
	do {
		cout << "podaj podstawy trapezu, a nastepnie jego ramiona\n";
		wiekszaOdZera(q);
		wiekszaOdZera(w);
		wiekszaOdZera(e);
		wiekszaOdZera(r);
		if (q > w) {
			qwe = trapez(q, w, e, r);
		}
		else if (w > q) {
			qwe = trapez(q, w, e, r);

		}
		else if (w == q&&e == r) {
			qwe = true;
		}
		else {
			qwe = false;
		}
		if (qwe == true) {
			a = q;
			b = w;
			c = e;
			d = e;
		}
	} while (qwe != true);
}
void Kwadrat::kon_kwa() {
	int q;
	cout << "podaj bok kwadratu\n";
	wiekszaOdZera(q);
	a = q;
}
void Prostokat::kon_pros() {
	int q, w;
	cout << "podaj boki prostokatu\n";
	wiekszaOdZera(q);
	wiekszaOdZera(w);
	a = q;
	b = w;
}
void Deltoid::kon_delt(){
	int q, w;
	cout << "podaj bok deltoidu\n";
	wiekszaOdZera(q);
	wiekszaOdZera(w);
	a = q;
	b = w;
}
void Romb::kon_romb() {
	int q;
	cout << "podaj bok rombu\n";
	wiekszaOdZera(q);
	a = q;
}
void Rownoleglobok::kon_rown() {
	int q, w;
	cout << "podaj bok rownolegloboku\n";
	wiekszaOdZera(q);
	wiekszaOdZera(w);
	a = q;
	b = w;
}
void Okrag::kon_ok() {
	int q;
	cout << "podaj promien okregu\n";
	wiekszaOdZera(q);
	a = q;
}