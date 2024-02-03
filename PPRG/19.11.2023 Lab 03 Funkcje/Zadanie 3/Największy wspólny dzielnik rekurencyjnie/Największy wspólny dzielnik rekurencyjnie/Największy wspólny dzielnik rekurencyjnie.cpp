#include <iostream>
#include <chrono>

using namespace std;

int funkcja(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return funkcja(b, a % b);
    }
}

int main() {
    int x, y;
    cout << " Napisz rekurencyjna wersje funkcji obliczajacej: najwiekszy wspolny dzielnik" << endl;

    cout << "Podaj pierwsza liczbe: ";
    cin >> x;

    cout << "Podaj druga liczbe: ";
    cin >> y;

    auto start = chrono::high_resolution_clock::now();
    int wynik = funkcja(x, y);

    auto end = std::chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    cout << "Najwiekszy wspolny dzielnik: " << wynik << endl;

    cout << "\nCzas wykonania: " << duration.count() << " sekundy" << endl;

    return 0;
}