#include <iostream>
#include <string>
using namespace std;
int funkcja(int liczbax) {
    int wynik = 0;
    int suma = 0;
    int ileCyfr = 0;

    string xtekst = to_string(liczbax);

    ileCyfr = xtekst.length();

    for (int i = 0; i < ileCyfr; i++)
    {
        char znak = xtekst[i];
        int cyfra = znak - '0';
        wynik = wynik + pow(cyfra, ileCyfr);
    }
    if (liczbax == wynik) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    cout << " Napisz funkcje, ktora jako parametr przyjmuje liczbe calkowita i oddaje 1,\n jezeli liczba jest liczba Armstronga oraz 0 w przeciwnym przypadku.!\n"<<endl;
    int x = 0;

    cout << "Podaj liczbe, program sprawdzi czy jest liczba Amstronga -> ";
    cin >> x;

    funkcja(x);

    if (x <= 0) 
    {
        cout << endl << " Liczba musi byc liczba naturalna!" << "\n" << endl;
    }
    else if (funkcja(x) == 1) 
    {
        cout << endl << x << " jest liczba amstronga " << "\n" << endl;
    }
    else 
    {
        cout << endl << x << " Nie jest liczba amstronga " << "\n" << endl;
    }
        
    cout << "\nPress enter key to close ";
    cin.get();
    cin.get();
    return 0;
}