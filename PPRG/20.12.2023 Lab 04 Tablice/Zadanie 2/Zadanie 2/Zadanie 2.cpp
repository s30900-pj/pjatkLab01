#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Przedmiot {
    string nazwa;
    int punktyECTS;
    vector<int> oceny;
};

struct Student {
    int numer;
    string imie;
    string nazwisko;
    int biezacySemestr;
    vector<Przedmiot> listaPrzedmiotow;
};

void dodajOcene(Przedmiot& przedmiot, int ocena) {
    przedmiot.oceny.push_back(ocena);
}

void wyswietlInformacjeStudenta(const Student& student) {
    cout << "Numer: " << student.numer << "\n";
    cout << "Imie: " << student.imie << "\n";
    cout << "Nazwisko: " << student.nazwisko << "\n";
    cout << "Biezacy semestr: " << student.biezacySemestr << "\n";

    cout << "Lista przedmiotow:\n";
    for (const Przedmiot& przedmiot : student.listaPrzedmiotow) {
        cout << "  Nazwa: " << przedmiot.nazwa << "\n";
        cout << "  Punkty ECTS: " << przedmiot.punktyECTS << "\n";
        cout << "  Oceny: ";
        for (int ocena : przedmiot.oceny) {
            cout << ocena << " ";
        }
        cout << "\n";
    }

    cout << "----------------\n";
}

double obliczSredniaWazona(const Student& student) {
    double sumaOcenWazona = 0.0;
    double sumaPunktowECTS = 0.0;

    for (const Przedmiot& przedmiot : student.listaPrzedmiotow) {
        double sumaOcen = 0.0;

        for (int ocena : przedmiot.oceny) {
            sumaOcen += ocena;
        }

        sumaOcenWazona += (sumaOcen / przedmiot.oceny.size()) * przedmiot.punktyECTS;
        sumaPunktowECTS += przedmiot.punktyECTS;
    }

    if (sumaPunktowECTS == 0.0) {
        return 0.0; 
    }

    return sumaOcenWazona / sumaPunktowECTS;
}

bool porownajStudentow(const Student& a, const Student& b) {
    return obliczSredniaWazona(a) > obliczSredniaWazona(b);
}

int main() {

    Student student1 = { 1, "Jan", "Kowalski", 1, {{"Matematyka", 5, {4, 5, 4}}, {"Fizyka", 4, {3, 4, 5}}} };
    Student student2 = { 2, "Anna", "Nowak", 2, {{"Informatyka", 6, {5, 5, 5}}, {"Chemia", 3, {2, 3, 3}}} };

    
    dodajOcene(student1.listaPrzedmiotow[0], 5);
    dodajOcene(student2.listaPrzedmiotow[1], 4);

    
    wyswietlInformacjeStudenta(student1);
    wyswietlInformacjeStudenta(student2);

    
    vector<Student> listaStudentow = { student1, student2 };

    sort(listaStudentow.begin(), listaStudentow.end(), porownajStudentow);

    cout << "Lista rankingowa studentow:\n";
    for (const Student& student : listaStudentow) {
        cout << "Numer: " << student.numer << ", Srednia wazona: " << obliczSredniaWazona(student) << "\n";
    }

    return 0;
}

