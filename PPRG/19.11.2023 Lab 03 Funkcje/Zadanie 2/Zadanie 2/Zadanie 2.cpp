#include <iostream>
#include <cmath>
using namespace std;

int funkcja(int liczbax) {

	//int pierwiastek = pow(liczbax, 1.0 / 3.0);
	//return (pierwiastek * pierwiastek * pierwiastek == liczbax) ? 1 : 0;

	//-----------------------------

	int pierwiastek = 1;
	while (pierwiastek * pierwiastek * pierwiastek <= liczbax) 
	{
		if (pierwiastek * pierwiastek * pierwiastek == liczbax) {
			return 1;
		}
		pierwiastek++;
	}
	return 0;
}

int main() {
	cout << " Napisz funkcje, ktora sprawdza, czy zadana jako parametr liczba calkowita jest \n szescianem pewnej liczby calkowitej, 1 jezeli liczba jest liczba Armstronga oraz 0 w przeciwnym przypadku.!" << endl;
	int x = 0;

	cout << "\nPodaj liczbe, program sprawdzi czy jest szescianem jakies liczby -> ";
	cin >> x;

	cout << endl << x << (funkcja(x) ? " jest szescianem jakies liczby" : " nie jest szescianem zadnej liczby") << endl;

	return 0;
}