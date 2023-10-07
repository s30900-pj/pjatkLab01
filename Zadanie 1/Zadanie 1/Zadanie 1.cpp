/////////////////////////////////////////////////////zad 1////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int min;
    int max;
    cout << "Podaj liczby \n Podaj a = ";
    cin >> a;
    cout << "\nPodaj b = ";
    cin >> b;
    cout << "\nPodaj c = ";
    cin >> c;

    if (a > b) {
        min = b;
        max = a;
    }
    else {
        min = a;
        max = b;
    }

    if (min > c) {
        min = c;
    }
    if (max < c) {
        max = c;
    }
    cout << "Najmniejsza liczba z podanych to = " << min << endl;
    cout << "Najwieksza liczba z podanych to = " << max << endl;

    return 0;
}

////////////////////////////////////////////////////////zad 2//////////////////////////////////////////////////