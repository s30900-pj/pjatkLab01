#include <iostream>
#include <chrono>
using namespace std;

int funkcja(int a, int b) {
    while (b != 0) {
        int NajDzielnik = b;
        b = a % b;
        a = NajDzielnik;
        //if (a > b) {
        //    a = a - b;
        //}
        //else {
        //    b = b - a;
        //}
    }
    return a;
}

int main() {
    int x, y;
    cout << " Napisz iteracyjna wersje funkcji obliczajacej: najwiekszy wspolny dzielnik" << endl;

    cout << "Podaj pierwsza liczbe: ";
    cin >> x;

    cout << "Podaj druga liczbe: ";
    cin >> y;

    auto start = chrono::high_resolution_clock::now();

    int wynik = funkcja(x, y);

    auto end = std::chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    cout << "\nNajwiekszy wspolny dzielnik: " << wynik << endl;

    cout << "\nCzas wykonania: " << duration.count() << " sekundy" << endl;
    return 0;
}


//Przykład:
//
//  `a = 48` i `b = 18`:
// Iteracja 1: `48 - 18 = 30`
// Iteracja 2: `30 - 18 = 12`
// Iteracja 3: `18 - 12 = 6`
// Iteracja 4: `12 - 6 = 6`
// Iteracja 5: `6 - 6 = 0`
//
//Po tej ostatniej iteracji, `a` przyjmuje wartość 6, co jest największym wspólnym dzielnikiem liczb 48 i 18.


//  Przykład, `liczba1 = 48` i `liczba2 = 18`:
//- Iteracja 1: `a = 48`, `b = 18` (48 % 18 = 12)
//- Iteracja 2: `a = 18`, `b = 12` (18 % 12 = 6)
//- Iteracja 3: `a = 12`, `b = 6` (12 % "6" = 0)

//powtarzanie dzielenia przez resztę, aż druga liczba osiągnie wartość zero.