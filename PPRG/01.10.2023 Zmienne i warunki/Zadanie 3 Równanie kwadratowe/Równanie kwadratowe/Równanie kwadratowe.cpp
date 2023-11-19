#include <iostream>
using namespace std;
int main()
{
	cout << "Program prosi o podanie wspolczynnikow a, b i c w rownaniu kwadratowym axx + b*x + c = 0." << endl;
	cout << "Na podstawie podanych wspolczynnikow program podaje rozwiazanie rownania."<<endl;

	float a = 0, b = 0, c = 0, x = 0, x1 = 0, x2 = 0, delta = 0;// tworzenie zmiennych liczbowych float
	cout << "\nPodaj a = ";
	cin >> a;// wczytywanie liczb
	cout << "\nPodaj b = ";
	cin >> b;
	cout << "\nPodaj c = ";
	cin >> c;
	if (a == 0)//sprawdzenie czy a = 0
	{
		cout << "\nRownanie liniowe (" << b << ", " << c << ")"<<endl;
	}
	else {
		delta = pow(b, 2) - 4 * a * c;// tworzenie delty
		if (delta < 0)
		{
			cout << "\nBrak rozwiazan!" << endl;
		}
		else {
			if (delta == 0)
			{
				b = -1 * b;
				x = b / 2 * a;
				cout << "\nRozwiazaniem rownania jest x = " << x << endl;
			}
			else {
				b = -1 * b;
				x1 = (b + sqrt(delta)) / 2 * a;// obliczenie rozwiazania
				x2 = (b - sqrt(delta)) / 2 * a;
				cout << "\nRozwiazaniem rownania jest x1 = " << x1 << endl;
				cout << "Rozwiazaniem rownania jest x2 = " << x2 << endl;// wynik obliczen
			}
		}
	}
	return 0;
}