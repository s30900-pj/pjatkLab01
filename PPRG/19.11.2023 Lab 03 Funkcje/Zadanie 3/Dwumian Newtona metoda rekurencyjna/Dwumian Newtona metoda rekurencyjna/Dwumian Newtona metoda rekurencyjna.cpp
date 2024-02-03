#include <iostream>
#include <chrono>
using namespace std;

unsigned int funkcja(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }

    return funkcja(n - 1, k - 1) * n / k;
}

int main() {
    int n, k;
    cout << " Napisz rekurencyjna wersje funkcji obliczajacej: dwumian Newtona" << endl;

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

// 1. Początkowe wartości : (n = 6, k = 2 )
//
// 2. Wywołanie funkcji : 
//   dwumianNewtona(6, 2)
//    Ponieważ k nie jest równa 0 ani 6, przechodzimy do rekurencyjnego wywołania funkcji :
//    dwumianNewtona(5, 1) }
//    Ponieważ k  nadal nie jest równa 0 ani 5, przechodzimy do kolejnego rekurencyjnego wywołania :
//    dwumianNewtona(4, 0)
// Warunek bazowy : k = 0 , więc zwracamy 1.
//    return 4 * 5 / 2  mnożenie i dzielenie przez k
//    Zwraca 10
//  return 5 * 6 / 2  mnożenie i dzielenie przez k 
//  Zwraca 15