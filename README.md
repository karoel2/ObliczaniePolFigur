# project_16
12.	Opracować program, który umożliwia wycenę dań złożonych z kilku składników. 
W programie należy zdefiniować klasę Danie, której składowymi są nazwa dania oraz nazwy składników (max. 3) i klasę Skladnik, która zawiera nazwę składnika i jego cenę. Program udostępnia następujące opcje:
–	A : wczytanie obiektów klasy Danie z pliku dyskowego Menu i obiektów klasy 
Skladniki z pliku dyskowego Elementy do odpowiednich tablic obiektów (max. 15 dań, 25 składników),
–	B : wprowadzenie nowego dania do tablicy dań,
–	C : wprowadzenie nowego składnika do tablicy składników,
–	D : zmiana ceny wskazanego składnika,
–	E : obliczenie aktualnej ceny dania,
–	X : koniec programu i zapisanie obiektów do plików Menu i Elementy.
W klasie Danie należy  przeciążyć operator [ ] dla obliczenia ceny i-tego składnika. W obydwu klasach należy przeciążyć operatory strumieniowe dla zapisu/odczytu obiektów danej klasy (klawiatura, monitor ekranowy, pliki dyskowe).
