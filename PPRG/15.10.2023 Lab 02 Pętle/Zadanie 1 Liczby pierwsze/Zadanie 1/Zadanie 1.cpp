#include <iostream>
using namespace std;

int main()
{
    cout << "Napisz program, ktory wypisze na ekranie wszystkie liczby pierwsze z zadanego zakresu. \nZakres mozna podac w kodzie programu."<<endl;
    int a = 0, b = 0;
    cout << "\nPodaj liczbe zaczynajaca przedzial = ";
    cin >> a;
    cout << "\nPodaj liczbe konczaca przedzial = ";
    cin >> b;
    cout << endl;

    for (int i = a; i <= b; ++i) {
        int j;
        if (a <= 1) {
            cout << "";
        }
        for (j = 2; j < i; ++j) { // (9) -> 1 (2) (3) 4 (5) 6 (7) 8 9
            if (i % j == 0) {
                break;
            }
        }
        if (j == i) {
            cout << i << " ";
        }
    }
    cout << "\n";
    cout << "\n";
    return 0;
}
