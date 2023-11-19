#include <iostream> // biblioteka iostream (strumieni wejścia-wyjścia)
using namespace std;
int main()
{
	cout << "Program prosi o podanie wspolczynnikow a i b w rownaniu liniowym a*x + b = 0. \nNa podstawie podanych wspolczynnikow program podaje rozwiazanie rownania.\n" << endl;
	float a = 0, b = 0, x = 0; // deklaracja zmiennych
	cout << "Podaj a = "; // pobieranie wspolczynnikow
	cin >> a; // wczytywanie liczby
	cout << "Podaj b = ";
	cin >> b;
	if (a == 0) {
		if (b == 0)
		{
			cout << "\nRownanie tozsamosciowe czyli posiada nieskonczenie wiele rozwiazan" << endl;
		}
		else {
			cout << "\nRownanie sprzeczne nie ma rozwiazan" << endl;
		}
	}
	else
	{
		b = b * -1;// zmiana znaku dla b
		x = b / a; // obliczanie liczby x
		cout << "\nRozwiazaniem rownania jest liczba x = " << x << endl;
	}
	return 0;
}