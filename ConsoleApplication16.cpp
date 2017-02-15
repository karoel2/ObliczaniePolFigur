#include "stdafx.h"
#include "iostream"
#include "string"
#include "cmath"
#include "Header.h"
using namespace std;
char wybor;
Wielokat *tab[11];
Prostokat tabP[11];
Kwadrat tabK[11];
Trojkat tabT[11];
int licznik=0, suma;
void case1() {
	cout << "case1\n";
	tabP[licznik].kon_pros();
	tab[licznik] = &tabP[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case2() {
	cout << "case2\n";
	tabK[licznik].kon_kwa();
	tab[licznik] = &tabK[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case3() {
	cout << "case3\n";
	tabT[licznik].kon_tro();
	tab[licznik] = &tabT[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case4(){
	int i;
	cout << "case4\n";
	for (i = 0; i < licznik; i++) {
		suma += tab[i]->obwod();
	}
	cout << "Suma obwodow jest rowna: " << suma << endl;
}
int main()
{
	do {
		cout << "Wybierz: \n";
		cout << "1. Aby stworzyc prostokat\n";
		cout << "2. Aby stworzyc kwadrat\n";
		cout << "3. Aby stworzyc trojkat\n";
		cout << "4. Aby zszumowac obwody wszystkich figut\n";
		cout << "0. Aby wyjsc\n";
		cin >> wybor;
		switch (wybor) {
		case '1':
			case1();
			break;
		case '2':
			case2();
			break;
		case '3':
			case3();
			break;
		case '4':
			case4();
			break;
		}
	} while (wybor != '0');
    return 0;
}