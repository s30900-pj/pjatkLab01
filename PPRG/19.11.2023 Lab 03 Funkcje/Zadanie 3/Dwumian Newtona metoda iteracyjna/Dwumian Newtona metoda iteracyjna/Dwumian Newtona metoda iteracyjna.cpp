#include <iostream>
#include <chrono>
using namespace std;

int funkcja(int n, int k) {

    if (k < 0 || k > n)
    {
        return 0;
    }

    int wynik = 1;

    for (int i = 0; i < k; ++i)
    {
        wynik *= (n - i);
        wynik /= (i + 1);
    }

    return wynik;
}

int main() {
    int n, k;
    cout << " Napisz iteracyjna wersje funkcji obliczajacej: dwumian Newtona" << endl;

    cout << "Podaj n: ";
    cin >> n;

    cout << "Podaj k: ";
    cin >> k;

    auto start = chrono::high_resolution_clock::now();

    cout << "\nWynik dwumianu Newtona dla C(" << n << ", " << k << ") to: " << funkcja(n, k) << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    cout << "\nCzas wykonania: " << duration.count() << " sekundy" << endl;
    return 0;
}

//(6) _  6!    _  4! * 5 * 6  _  30  -> "15"
//(2)   2!*4!      2 * 4!        2


//---- - 1 k iteracja---- -

//6 - 0 = 6

//6 * 1 = 6

//0 + 1 = 1

//6 / 1 = 6

//---- - 2 k iteracja---- -

//6 - 1 = 5

//5 * 6 = 30

//1 + 1 = 2

//30 / 2 = 15