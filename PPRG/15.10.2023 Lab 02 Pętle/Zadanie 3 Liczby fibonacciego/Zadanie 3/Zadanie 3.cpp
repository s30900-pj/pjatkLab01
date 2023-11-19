#include <iostream>
using namespace std;

int main()
{
    cout << "Dla zadanego N, napisz program wyliczajacy N-ta urzedu Fibonacciego.\n" << endl;

    int N;
    cout << "Podaj wartosc N: ";
    cin >> N;

    if (N < 0) {
        cout << "N musi byc liczba nieujemna.\n" << endl;
        return 1;
    }

    int a = 0, b = 1, fib = 0;

    for (int i = 2; i <= N; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << "\nN-ta liczba Fibonacciego: " << (fib) << endl;

    cout << "\n";
    cout << "\n";
    return 0;
}
