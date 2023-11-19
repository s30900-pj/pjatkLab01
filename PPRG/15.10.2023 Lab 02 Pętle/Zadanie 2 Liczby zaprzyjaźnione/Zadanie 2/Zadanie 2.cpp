#include <iostream>
using namespace std;
int main()
{
    cout << "Napisz program wyrejestrowujący zaprzyjaźnione z zadanego zakresu. Zakres dopuszczalny w kodzie programu." << endl;
    int x = 0, y = 0;
    cout << "\nPodaj liczbe zaczynajaca przedzial = ";
    cin >> x;
    cout << "\nPodaj liczbe konczaca przedzial = ";
    cin >> y;
    cout << endl;

    for (int a = x; a <= y; ++a) {
        int suma_a = 0;

        // Obliczenie sumy dzielników dla liczby a
        for (int i = 1; i <= a / 2; ++i) {
            if (a % i == 0) { 
                //cout << i << " ";
                suma_a += i;
            }
        }
        // Sprawdzenie, czy liczby są zaprzyjaźnione
        int b = suma_a;
        int suma_b = 0;
        // Obliczenie sumy dzielników dla liczby b
        for (int i = 1; i <= b / 2; ++i) {
            if (b % i == 0) {
                suma_b += i;
                //cout << i << " ";
            }
        }
        // a<b unikanie powtórzeń wyniku || suma_b == a -> sprawdza czy suma dzielnikow liczby b jest równa liczbie a 
        if (a < b && suma_b == a) {  
            cout << a << " i " << b << " sa zaprzyjaznione.\n";
        }
    }
    cout << "\n";
    cout << "\n";
    return 0;
}
